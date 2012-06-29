//
//  lex.h
//  ruby-static
//
//  Created by Vaněk Josef on 29/06/12.
//  Copyright (c) 2012 Intellicore. All rights reserved.
//

#ifndef ruby_static_lex_h
#define ruby_static_lex_h

typedef enum {
    EXPR_BEG,			/* ignore newline, +/- is a sign. */
    EXPR_END,			/* newline significant, +/- is an operator. */
    EXPR_ARG,			/* newline significant, +/- is an operator. */
    EXPR_CMDARG,		/* newline significant, +/- is an operator. */
    EXPR_ENDARG,		/* newline significant, +/- is an operator. */
    EXPR_MID,			/* newline significant, +/- is an operator. */
    EXPR_FNAME,			/* ignore newline, no reserved words. */
    EXPR_DOT,			/* right after `.' or `::', no reserved words. */
    EXPR_CLASS,			/* immediate after `class', no here document. */
} lex_state;

struct kwtable *rb_reserved_word (register const char *str, register unsigned int len);

#endif
