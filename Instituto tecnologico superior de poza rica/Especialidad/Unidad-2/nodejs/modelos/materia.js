const { Schema, model } = require('mongoose');

const MateriaSchema = Schema({
    idMateria: {
        type: Number,
        required: true,
        unique: true
    },
    nombreMateria: {
        type: String,
        required: true,
        unique: true
    }
});

module.exports = model('Materia', MateriaSchema);