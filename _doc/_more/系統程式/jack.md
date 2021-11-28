# Jack 語言

## 範例 1

```
// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/11/Seven/Main.jack

/**
 * Computes the value of 1 + (2 * 3) and prints the result
 *  at the top-left of the screen.  
 */
class Main {

   function void main() {
       do Output.printInt(1 + (2 * 3));
       return;
   }

}
```

## 範例 2

* https://github.com/havivha/Nand2Tetris/blob/master/10/ArrayTest/Main.jack

```
// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/10/ArrayTest/Main.jack

/** Computes the average of a sequence of integers. */
class Main {
    function void main() {
        var Array a;
        var int length;
	var int i, sum;
	
	let length = Keyboard.readInt("HOW MANY NUMBERS? ");
	let a = Array.new(length);
	let i = 0;
	
	while (i < length) {
	    let a[i] = Keyboard.readInt("ENTER THE NEXT NUMBER: ");
	    let i = i + 1;
	}
	
	let i = 0;
	let sum = 0;
	
	while (i < length) {
	    let sum = sum + a[i];
	    let i = i + 1;
	}
	
	do Output.printString("THE AVERAGE IS: ");
	do Output.printInt(sum / length);
	do Output.println();
	
	return;
    }
}
```

## 範例 3

* https://github.com/havivha/Nand2Tetris/blob/master/09/Square/Main.jack

```
class Main {

    /** Initializes a new game and starts it. */    
    function void main() {
        var SquareGame game;

        let game = SquareGame.new();
        do game.run();
	do game.dispose();

        return;
    }
}
```

