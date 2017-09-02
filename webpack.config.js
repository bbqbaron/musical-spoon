const path = require('path');

module.exports = {
  entry: {
    zhaar: './lib/js/src/zhaar/zhaarRoot.js',
  },
  output: {
    path: path.join(__dirname, "bundledOutputs"),
    filename: '[name].js',
  },
};
