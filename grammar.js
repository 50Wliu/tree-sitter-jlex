module.exports = grammar({
  name: 'jlex',

  rules: {
    // The production rules of the context-free grammar
    source_file: $ => 'hello'
  }
});
