const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Quantity of fibonacci numbers: ', (quantity) => {

    var first;
    var second;

    startTime = new Date().getTime();
    console.log(startTime)
    for(i=1; i<=quantity;i++){

        if(!second){
            console.log(1);
            if(first)
                second = 1;
            else
                first = 1;

            continue;
        }
        else
        {
            var sum = second + first;
            console.log(sum);
            second = first
            first = sum;  
        }
    }
    updatedTime = new Date().getTime();
    console.log(`Duration: ${updatedTime - startTime}ms`)


  rl.close();
});




