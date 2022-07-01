const express = require('express');
const dotenv = require('dotenv');
const morgan = require('morgan');
const bodyparser = require("body-parser");
const path = require('path'); // inbuilt module
// Connecting the Database
const connectDB = require('./server/database/connection');

// Starting the server
const app = express();
// initializing the configuration of .env
dotenv.config({
    path: 'config.env'
})

// port 
const PORT = process.env.PORT || 8080

// log requests -- console logs the request response time and type 
app.use(morgan('tiny'));

// mongodb connection
connectDB();

// parse request to body-parser
app.use(bodyparser.urlencoded({
    extended: true
}))

// load routers
app.use('/', require('./server/routes/router'));

// server on port 
app.listen(PORT, () => {
    console.log(`Server is running on http://localhost:${PORT}`)
});


/**  
// to set view engine :- 

app.set("view engine", "Name of view engine")
app.set("views", path.resolve(__dirname, "path of view engine"))
//app.set("views", path.resolve(__dirname, "views/"))


// load assets :- 
// app.use('/css', express.static(path.resolve(__dirname, "assets/css")))
// app.use('/img', express.static(path.resolve(__dirname, "assets/img")))
// app.use('/js', express.static(path.resolve(__dirname, "assets/js")))


*/