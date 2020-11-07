const { Router } = require('express');
const { crearMateria, consultaMaterias } = require('../controladores/materia');

const router = new Router();

router.post('/', crearMateria);

router.get('/', consultaMaterias);

module.exports = router;