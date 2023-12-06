# Java Compiler Design

# Overview

This project focuses on the design and implementation of a Java Compiler, a crucial component for translating Java source code into executable machine code. The compiler is divided into three main phases: Lexical Analysis, Syntax Analysis, and Semantic Analysis. Each phase plays a crucial role in transforming high-level Java code into a format that a computer can execute.

# Lexical Analysis

The Lexical Analysis phase involves breaking down the source code into tokens, which are the smallest units of meaning in a programming language. This phase is responsible for identifying keywords, operators, identifiers, literals, and other language constructs. We have implemented a robust lexical analyzer that scans the input Java source code and generates a stream of tokens.

# Implementation Details

Lexer: Our lexer is built using lex, which facilitates the recognition of Java language constructs and converts them into tokens.
Regular Expressions: We use regular expressions to define the patterns for various token types, ensuring efficient and accurate lexical analysis.

# Syntax Analysis

Once the source code has been tokenized, the Syntax Analysis phase verifies whether the arrangement of these tokens conforms to the grammatical structure of the Java language. This phase involves constructing a syntax tree that represents the hierarchical structure of the program. We have implemented a parser that enforces the syntactic rules of Java and generates a syntax tree for further processing.

# Implementation Details

Parser: Our parser uses yacc tool to generate a parser based on the defined grammar rules for Java.
Syntax Tree: The generated syntax tree serves as an abstract representation of the program's structure, aiding in subsequent analysis phases.

