const Materia = require('../modelos/materia');

const crearMateria = async(req, res) => {
    const { idMateria, nombreMateria } = req.body;
    const oMateria = new Materia(req.body);
    console.log('Entre');


    await oMateria.save();

    console.log('Error : ', error);

    res.json({
        msj: 'Se guardo correctamente'
    });
}

const consultaMaterias = async(req, res) => {
    const { idMateria } = req.body;
    const oMateria = new Materia(req.body);

    await oMateria.save();

    res.json({
        msj: 'Hola mundo',
        nombre: 'Javier Alexis Mendoza Garcia'
    });
}

module.exports = {
    crearMateria,
    consultaMaterias
}