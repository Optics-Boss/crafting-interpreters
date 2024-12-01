# Chapter 1
## 1
- md = Markdown
- scss = syntactically awesome style sheets
- html = Hypertext Markup Language
- yaml 
- make  
- dart

# Chapter 2
## 1
- Odin has an handmade parser, and does not use Lex or Yacc.
- Zig has an handmade parser, and does not use Lex or Yacc.

## 2
Using an JIT compiler more of a performance overhead. If an language want to be close to the bare metal of the computer. The jit is just another abstraction layer. Jit compilation requires the execution environment to have write access to memory, this has the potential for security considerations. Jit compilers arena't optimized for a specific platform. Not suitable for real-time systems or high performed systems.

## 3
It is easy to execute lisp code using the interperter. 

# Chapter 3
No challenges that interest me.

# Chapter 4
## 1
Python and Haskell both use identation-sensitive syntax. Doing that requires comparing the amount of whitespace, which can't be done using a regular grammar. Python and Haskell are the only languages that are identation-based scoped programming languages.

## 2
Coffeescript
The reason is that using parentheses for a function call is optional. So it can be left out using a space.

Ruby
The reason is that using parentheses for a function call is optional. So it can be left out using a space.

C
Whitespace is needed to parse preprocessor directives and to correctly process the stingification operator.

## 3
White-space and comments can contain valuable information. 

White-space is important for layout sensitive languages for example: Python and Haskell

Comments can be useful for generating documentation based on comments in the code for example with Javadoc. But it can also be used as an source formatter.

# Chapter 5
```
expr → expr ( "(" ( expr ( "," expr )* )? ")" | "." IDENTIFIER )+
     | IDENTIFIER
     | NUMBER
```
Edited to 
```
expr → expr ( "(" ( expr ( "," expr )* )REPEAT ")" | "." IDENTIFIER )AT_LEAST_ONCE
     OR IDENTIFIER
     OR NUMBER
```

# Chapter 6
See code

# Chapter 7
## 1
I would allow only the comparison of numbers that are in a string format and parse those back to a number and then make the comparison. Because if i allow text strings that will lead to bugs and make the programming language more complicated and it will give it more bugs.

## 3
Java raises an exception when dividing and integer with a zero. When dividing a float with an zero it will produce an NAN or an INFINITY.

# Chapter 8
## 3
I expected that it will print 3, instead i got an error. I ran the code in Javascript and there i also got a 3 back from the compiler.

# Chapter 9
