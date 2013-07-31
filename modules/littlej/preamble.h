#ifndef LITTLEJ_PREAMBLE_H
#define LITTLEJ_PREAMBLE_H

/** I claim the letter j with _. Sorry guys my namespace now :D
Yesssssss!
*/
/**
I also don;t care about whether I've got 32 or 64 bit ints ... sorry not my 
style to use more than 16 ppl!
**/

typedef long aint; /** hacks... */
typedef unsigned long aintu;

typedef unsigned char octet; /** 8 bit sequence */
typedef short sym; /** Symbol main thingy for charring() */
typedef long word; /** Wyrd... a kind of a symbol... a word glyph .. contains two symbols at least ... */
typedef long long glyph; /** a glyph... don't ask it's a structure just as the {word}... predicato predicato precdicato */

typedef unsigned sym symu; /** Unsigned Symbol... */
typedef unsigned word wordu; /** Wyrd... a kind of a symbol... a word glyph .. contains two symbols at least ... */

typedef glyph value; /** data/code, value instance */
typedef sym key; /** meta information about instanced data, key (to structure information and so on ) */
typedef word  hint; /** data/code, format hint.. a hack,sorry bout that ;) */


/** this is the basic language of this lib... please keep this paradise klean, ok? */
typedef glyph (*form)(glyph d); /** form... (acquire data format OR transform OR functional transform) */
typedef glyph (*binary)(glyph a, glyph b);
typedef glyph (*tertiary)(glyph a, glyph b, glyph c);
typedef glyph (*quad)(glyph a, glyph b, glyph c);

typedef glyph* (*glyphs) (glyph a); /** this is empties a pool of glyphs each time called, depends on a single glyph

/** meaning */
typedef glyph (*string)(glyph obj, glyph meta);


typedef glyph (*split)(string me);
typedef glyph (*unit)(glyph sub, glyph pred, glyph obj);
typedef glyph (*text)(string start, string end, string advance, split asplit)





/** Handle to any data */
struct jk_s {
  octet self;
  octet inner;
  octet other;
  octet meta;
};
typedef jk_s jk_t; /* this is when a jh is interpreted, ok? otherwise it;s short */

struct jv_s {
  jv meta; /** you get through meta in order to get your hands on self, ok? meta is a function.*/
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

