const express = require('express');
const route = express.Router()

const services = require('../services/render');
const controller = require('../controller/controller');

/**
 *  @description Root Route return all users
 *  @method GET /
 */
route.get('/', services.homeRoutes);

// /**
//  *  @description add users return add user in database
//  *  @method GET /add-user
//  */
// route.get('/add-user', services.add_user)

/**
 * @description delete users return delete user in database
 * 
 */



// Creating API to call database  

route.post('/api/users', controller.create);
route.get('/api/users', controller.find);
route.delete('/api/users/:id', controller.delete);


module.exports = route