//
//  parse.h
//  ruby-static
//
//  Created by Vaněk Josef on 29/06/12.
//  Copyright (c) 2012 Intellicore. All rights reserved.
//

#ifndef ruby_static_parse_h
#define ruby_static_parse_h

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
/* Put the tokens into the symbol table, so that GDB and other debuggers
 know about them.  */
enum yytokentype {
	kCLASS = 258,
	kMODULE = 259,
	kDEF = 260,
	kUNDEF = 261,
	kBEGIN = 262,
	kRESCUE = 263,
	kENSURE = 264,
	kEND = 265,
	kIF = 266,
	kUNLESS = 267,
	kTHEN = 268,
	kELSIF = 269,
	kELSE = 270,
	kCASE = 271,
	kWHEN = 272,
	kWHILE = 273,
	kUNTIL = 274,
	kFOR = 275,
	kBREAK = 276,
	kNEXT = 277,
	kREDO = 278,
	kRETRY = 279,
	kIN = 280,
	kDO = 281,
	kDO_COND = 282,
	kDO_BLOCK = 283,
	kRETURN = 284,
	kYIELD = 285,
	kSUPER = 286,
	kSELF = 287,
	kNIL = 288,
	kTRUE = 289,
	kFALSE = 290,
	kAND = 291,
	kOR = 292,
	kNOT = 293,
	kIF_MOD = 294,
	kUNLESS_MOD = 295,
	kWHILE_MOD = 296,
	kUNTIL_MOD = 297,
	kRESCUE_MOD = 298,
	kALIAS = 299,
	kDEFINED = 300,
	klBEGIN = 301,
	klEND = 302,
	k__LINE__ = 303,
	k__FILE__ = 304,
	tIDENTIFIER = 305,
	tFID = 306,
	tGVAR = 307,
	tIVAR = 308,
	tCONSTANT = 309,
	tCVAR = 310,
	tINTEGER = 311,
	tFLOAT = 312,
	tSTRING_CONTENT = 313,
	tNTH_REF = 314,
	tBACK_REF = 315,
	tREGEXP_END = 316,
	tUPLUS = 317,
	tUMINUS = 318,
	tPOW = 319,
	tCMP = 320,
	tEQ = 321,
	tEQQ = 322,
	tNEQ = 323,
	tGEQ = 324,
	tLEQ = 325,
	tANDOP = 326,
	tOROP = 327,
	tMATCH = 328,
	tNMATCH = 329,
	tDOT2 = 330,
	tDOT3 = 331,
	tAREF = 332,
	tASET = 333,
	tLSHFT = 334,
	tRSHFT = 335,
	tCOLON2 = 336,
	tCOLON3 = 337,
	tOP_ASGN = 338,
	tASSOC = 339,
	tLPAREN = 340,
	tLPAREN_ARG = 341,
	tRPAREN = 342,
	tLBRACK = 343,
	tLBRACE = 344,
	tLBRACE_ARG = 345,
	tSTAR = 346,
	tAMPER = 347,
	tSYMBEG = 348,
	tSTRING_BEG = 349,
	tXSTRING_BEG = 350,
	tREGEXP_BEG = 351,
	tWORDS_BEG = 352,
	tQWORDS_BEG = 353,
	tSTRING_DBEG = 354,
	tSTRING_DVAR = 355,
	tSTRING_END = 356,
	tLOWEST = 357,
	tUMINUS_NUM = 358,
	tLAST_TOKEN = 359
};
#endif
/* Tokens.  */
#define kCLASS 258
#define kMODULE 259
#define kDEF 260
#define kUNDEF 261
#define kBEGIN 262
#define kRESCUE 263
#define kENSURE 264
#define kEND 265
#define kIF 266
#define kUNLESS 267
#define kTHEN 268
#define kELSIF 269
#define kELSE 270
#define kCASE 271
#define kWHEN 272
#define kWHILE 273
#define kUNTIL 274
#define kFOR 275
#define kBREAK 276
#define kNEXT 277
#define kREDO 278
#define kRETRY 279
#define kIN 280
#define kDO 281
#define kDO_COND 282
#define kDO_BLOCK 283
#define kRETURN 284
#define kYIELD 285
#define kSUPER 286
#define kSELF 287
#define kNIL 288
#define kTRUE 289
#define kFALSE 290
#define kAND 291
#define kOR 292
#define kNOT 293
#define kIF_MOD 294
#define kUNLESS_MOD 295
#define kWHILE_MOD 296
#define kUNTIL_MOD 297
#define kRESCUE_MOD 298
#define kALIAS 299
#define kDEFINED 300
#define klBEGIN 301
#define klEND 302
#define k__LINE__ 303
#define k__FILE__ 304
#define tIDENTIFIER 305
#define tFID 306
#define tGVAR 307
#define tIVAR 308
#define tCONSTANT 309
#define tCVAR 310
#define tINTEGER 311
#define tFLOAT 312
#define tSTRING_CONTENT 313
#define tNTH_REF 314
#define tBACK_REF 315
#define tREGEXP_END 316
#define tUPLUS 317
#define tUMINUS 318
#define tPOW 319
#define tCMP 320
#define tEQ 321
#define tEQQ 322
#define tNEQ 323
#define tGEQ 324
#define tLEQ 325
#define tANDOP 326
#define tOROP 327
#define tMATCH 328
#define tNMATCH 329
#define tDOT2 330
#define tDOT3 331
#define tAREF 332
#define tASET 333
#define tLSHFT 334
#define tRSHFT 335
#define tCOLON2 336
#define tCOLON3 337
#define tOP_ASGN 338
#define tASSOC 339
#define tLPAREN 340
#define tLPAREN_ARG 341
#define tRPAREN 342
#define tLBRACK 343
#define tLBRACE 344
#define tLBRACE_ARG 345
#define tSTAR 346
#define tAMPER 347
#define tSYMBEG 348
#define tSTRING_BEG 349
#define tXSTRING_BEG 350
#define tREGEXP_BEG 351
#define tWORDS_BEG 352
#define tQWORDS_BEG 353
#define tSTRING_DBEG 354
#define tSTRING_DVAR 355
#define tSTRING_END 356
#define tLOWEST 357
#define tUMINUS_NUM 358
#define tLAST_TOKEN 359

/* Copy the first part of user declarations.  */
// #line 13 "parse.y"

#define YYDEBUG 1
#define YYERROR_VERBOSE 1
#ifndef YYSTACK_USE_ALLOCA
#define YYSTACK_USE_ALLOCA 0
#endif

#endif
