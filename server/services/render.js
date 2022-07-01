const axios = require('axios');

// taking with database
exports.homeRoutes = (req, res) => {
    // Make a get request to /api/users to fetch all the users
    // fetching all the users from database     
    axios.get('http://localhost:3000/api/users')
        .then(function (response) {
            // handle success
            res.send(
                response.data
            );
        })
        .catch(err => {
            res.send(err);
        })
}