/* any Passes or Traversals that are expected to be parsed as part of
   a passlist.h file must be listed here in the format shown.  Make
   sure to also #include the header file defining the pass in
   passlist.h.  */

REGISTER(CheckIDs);
REGISTER(CheckTypeInfo);
REGISTER(CloneAllFns);
REGISTER(Codegen);
REGISTER(CreateEntryPoint);
REGISTER(DummyPass);
REGISTER(FieldsToMemberAccesses); // SJD: Convert fields in methods to MemberAccesses
REGISTER(FindUnknownTypes);
REGISTER(FindUnresolvedSymbols);
REGISTER(FilesToAST);
REGISTER(Fixup);
REGISTER(GetStuff);
REGISTER(MethodsToFunctions);    // SJD: Convert methods to functions
REGISTER(PrintAST);        // BLC: pretty-prints all or part of the AST
REGISTER(PrintProgram);    // BLC: pretty-prints the whole program
REGISTER(PrintStmts);
REGISTER(PrintSymtab);     // BLC: prints out the whole symboltable
REGISTER(ProcessWithStatements); // SJD: Copies with symbols into classes, etc.
REGISTER(RenameCSymbols);  // BLC: rename symbols for C codegen
REGISTER(ResolveSymbols2);       // SJD: Resolve symbols after analysis
REGISTER(RunAnalysis);
REGISTER(TestGetStuff);
REGISTER(VerifyASTType);

