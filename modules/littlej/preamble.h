#ifndef LITTLEJ_PREAMBLE_H
#define LITTLEJ_PREAMBLE_H

/** I claim the letter j with _. Sorry guys my namespace now :D
Yesssssss!
*/
/**
I also don;t care about whether I've got 32 or 64 bit ints ... sorry not my 
style to use more than 16 ppl!
**/

typedef long jint;
typedef unsigned long jintu;
typedef unsigned char jbyte; /** 1 byte */
typedef unsigned char joctet; /** 8 bit sequence */
typedef unsigned short jsymu; /** Unsigned Symbol... */
typedef short jsym; /** Symbol */

typedef void* jv;
typedef const void* jvc;
typedef short jh;


/** Handle to any data */
struct jh_s {
  joctet inner;
  joctet self;
  joctet other;
  joctet meta;
};
typedef jh_s jh_t; /* this is when a jh is interpreted, ok? otherwise it;s short */

/** instanced data */
struct ji {
  jh id;
  jh meta;
  jh inner; /** inner structure of this instanced data */
  jv self;
  
};
/** main library object which lives and is a SINGLE GLBOAL TOA NTYHING! *
*/
struct ja {
  jh_t id; /* identifies this struct */
  ji (*func)(jh f); /* this returns "instance of any function" in the library, ok? */
  jh (*func_set)(jv f, jv g); /* gi describes f's vars, ok? */
  ji (*data)(jh d, jh t); /* query for data to anything on the system or meta-system, t is type, d is argument data lister */
  
  ji (*format)(jh d); /* query for a format of a struct or any other data() */
  ji (*format_set(jh d, jh m); /* m is meta... describe function */
  
  
  ji (*meta)(jh k
};

ji 
ja_init(


#endif

