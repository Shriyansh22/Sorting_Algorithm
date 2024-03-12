function bubbleSort(arr) {
    var n = arr.length;

    for (var i = 0; i < n - 1; i++) {
        for (var j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
            
                var temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

function main() {
    var readline = require('readline');
    var rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    rl.question("Enter the size of the array: ", function (n) {
        var array = [];

        function inputNumber(index) {
            if (index < n) {
                rl.question("Enter the number: ", function (num) {
                    array.push(parseInt(num));
                    inputNumber(index + 1);
                });
            } else {
                bubbleSort(array);

                console.log("Sorted array:");
                console.log(array.join(" "));

                rl.close();
            }
        }

        inputNumber(0);
    });
}

main();
