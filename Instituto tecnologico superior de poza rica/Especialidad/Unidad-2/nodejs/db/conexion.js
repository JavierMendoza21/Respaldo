const mongoose = require('mongoose');

const oConn = async() => {
    await mongoose.connect('mongodb+srv://admin:100Alexis@cluster0.qhag3.mongodb.net/TEST_NODE', {
        useNewUrlParser: true,
        useFindAndModify: false,
        useCreateIndex: true,
        useUnifiedTopology: true
    });
    console.log('Conectado a mongo DB Atlas');
}

module.exports = {
    oConn
}