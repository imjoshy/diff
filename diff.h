//
//  diff.h
//  diff
//
//  Created by Josh Maranan on 5/19/19.
//  Copyright © 2019 Josh Maranan. All rights reserved.
//

#ifndef diff_h
#define diff_h

#include "para.h"
void version(void);
void loadfiles(const char*, const char*);
void print_option(const char*, int);
void diff_output_conflict_error(void);
void setoption(const char*, const char*, const char*, int*);
void showoptions(const char*, const char*);
void init_options_files(int, const char**);
void show_brief(para*, para*);
void show_side_by_side(para*, para*);
void report_identical_files(para*, para*);
void show_left_column(para*, para*);
void suppress_common_lines(para*, para*);


#endif /* diff_h */
