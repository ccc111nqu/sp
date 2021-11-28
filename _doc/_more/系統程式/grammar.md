# 高階語言的語法 (BNF/EBNF)

* 閱讀 : [語法理論 - medium](https://medium.com/%E4%BA%BA%E5%B7%A5%E6%99%BA%E6%85%A7/%E8%AA%9E%E6%B3%95%E7%90%86%E8%AB%96-23bc87126e6)

## 簡易運算式語法

* https://github.com/cccbook/sp/tree/master/code/c/02-compiler/01-compileExp

```
E=T ([+-] T)*
T=F ([*/] F)*
F=Number | Id | '(' E ')'
```

## 詞彙語法描述

* [正規表達式](regexp)

```
String = ".*"
Number = [0-9]+
Id     = [A-Z_][A-Z0-9_]*
Char   = .
```

## 包含 while 的語法

```
PROG    = STMT
STMT    = WHILE | BLOCK | ASSIGN
WHILE   = while (E) STMT
BLOCK   = { STMT* }
ASSIGN  = id '=' E;
E       = F (op E)*
F       = (E) | Number | Id
```

## C0 語言

```
PROG     = (INCLUDE | DECL | FUNCTION)*
INCLUDE  = #...>
DECL     = *? ASSIGN
FUNCTION = type id (PARAM_LIST) BLOCK
STMT     = WHILE | IF | BLOCK | RETURN | VAR ; | ASSIGN;
WHILE    = while (E) STMT
IF       = if (E) STMT (else STMT)?
BLOCK    = { LIST<VAR> STMT* }
RETURN   = return E;
ASSIGN   = P (=E)?
CALL(id) = id ( LIST<E> )
VAR      = Type LIST<DECL>
E        = F (op F)*
F        = (++ | -- | [*&+-~!])? P
P        = ((E) | Number | Literal | ID) ([E] | (LIST<E>) | ++ | --)      // ID (LIST<E>)   == CALL(id)
```

## Lua 的語法

```

	chunk ::= {stat [`;´]} [laststat [`;´]]

	block ::= chunk

	stat ::=  varlist `=´ explist | 
		 functioncall | 
		 do block end | 
		 while exp do block end | 
		 repeat block until exp | 
		 if exp then block {elseif exp then block} [else block] end | 
		 for Name `=´ exp `,´ exp [`,´ exp] do block end | 
		 for namelist in explist do block end | 
		 function funcname funcbody | 
		 local function Name funcbody | 
		 local namelist [`=´ explist] 

	laststat ::= return [explist] | break

	funcname ::= Name {`.´ Name} [`:´ Name]

	varlist ::= var {`,´ var}

	var ::=  Name | prefixexp `[´ exp `]´ | prefixexp `.´ Name 

	namelist ::= Name {`,´ Name}

	explist ::= {exp `,´} exp

	exp ::=  nil | false | true | Number | String | `...´ | function | 
		 prefixexp | tableconstructor | exp binop exp | unop exp 

	prefixexp ::= var | functioncall | `(´ exp `)´

	functioncall ::=  prefixexp args | prefixexp `:´ Name args 

	args ::=  `(´ [explist] `)´ | tableconstructor | String 

	function ::= function funcbody

	funcbody ::= `(´ [parlist] `)´ block end

	parlist ::= namelist [`,´ `...´] | `...´

	tableconstructor ::= `{´ [fieldlist] `}´

	fieldlist ::= field {fieldsep field} [fieldsep]

	field ::= `[´ exp `]´ `=´ exp | Name `=´ exp | exp

	fieldsep ::= `,´ | `;´

	binop ::= `+´ | `-´ | `*´ | `/´ | `^´ | `%´ | `..´ | 
		 `<´ | `<=´ | `>´ | `>=´ | `==´ | `~=´ | 
		 and | or

	unop ::= `-´ | not | `#´
```


## 典型的 BNF 語法範例

```
program: statement;
statement: whileStatement
        | ifStatement
        | // other statement possibilities ...
        | '{' statementSequence '}'
whileStatement: 'while' '(' expression ')' statement
ifStatement: simpleIf
        | ifElse
simpleIf: 'if' '(' expression ')' statement
ifElse: 'if' '(' expression ')' statement
        'else' statement
statementSequence: '' // null, i.e. the empty sequence
        | statement ';' statementSequence
expression: // definition of an expression comes here
        // more definitions follow
```


