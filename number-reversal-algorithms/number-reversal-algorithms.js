function reverse(number) {
  while (number > 0) {
    console.log(number % 10);
    var number = parseInt(number / 10);
  }
}
console.log(reverse(123));
