const Materia = require('../modelos/materia');

const crearMateria = async(req, res) => {
    const { idMateria, nombreMateria } = req.body;
    const oMateria = new Materia(req.body);
    await oMateria.save();
    res.json({
        oMateria
    });
}

const consultaMaterias = async(req, res) => {

}

module.exports = {
    crearMateria,
    consultaMaterias
}