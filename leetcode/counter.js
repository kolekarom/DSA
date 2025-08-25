function createCounter(init) {
    let current = init;  // store the current value
  
    return {
      increment: function () {
        current += 1;
        return current;
      },
      decrement: function () {
        current -= 1;
        return current;
      },
      reset: function () {
        current = init;
        return current;
      }
    };
  }