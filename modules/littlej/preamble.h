#ifndef LITTLEJ_PREAMBLE_H
#define LITTLEJ_PREAMBLE_H

/** I claim the letter j with _. Sorry guys my namespace now :D
Yesssssss!
*/
/**
I also don;t care about whether I've got 32 or 64 bit ints ... sorry not my 
style to use more than 16 ppl!
**/

typedef long jint; /** hacks... */
typedef unsigned long jintu;
typedef unsigned char jbyte; /** 1 byte */
typedef unsigned char joctet; /** 8 bit sequence */
typedef unsigned short jsymu; /** Unsigned Symbol... */

typedef short jsym; /** Symbol main thingy for charring() */
typedef long jword; /** Wyrd... a kind of a symbol... a word glyph .. contains two symbols at least ... */
typedef long long jglyph; /** a glyph... don't ask it's a structure just as the {jword}... predicato predicato precdicato */
typedef jglyph jtext;
typedef jglyph jtext;

typedef void* jv; /** data/code, value instance */
typedef jsym jk; /** meta information about instanced data, key (to structure information and so on ) */
typedef long  jf; /** data/code, format hint.. a hack,sorry bout that ;) */

/** Handle to any data */
struct jk_s {
  joctet self;
  joctet inner;
  joctet other;
  joctet meta;
};
typedef jk_s jk_t; /* this is when a jh is interpreted, ok? otherwise it;s short */

struct jv_s {
  jv meta;
  jv self;
};

/** instanced data, value */
struct jvi {
  jk id;
  jv self; /** pointer to the data */
  jf inner; /** inner structure of this instanced data, identification */
  jv other; /** meta information inside it after iterpret. */  
};

/** instanced data, in(t)erpreted */
struct jiv {
  jh_t id;
  ji self;
  jv inner;
  jv other;
  jv meta;
};

struct jif {
}

/** this represents a type... which is a thingy to be used when interpreting data's (values etc) */
struct jtype {
  jh id;
  j self; /** just like python's cls, cls == self here though... sorry bout that ;) */
  
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
  
  ji (*self)(
  ji (*meta)(jh k
  
  j
};

ji 
ja_init(


#endif

