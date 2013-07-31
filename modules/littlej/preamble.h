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
typedef long long glyph; /** a glyph... don't ask it's a structure just as the {word}... predicato predicato precdicato */
typedef glyph* segment;

typedef glyph value; /** data/code, value instance */
typedef glyph  key; /** data/code, format hint.. a hack,sorry bout that ;) */
typedef sym hint; /** Handle to a data/code */

struct thang_s {
  sym hint;
  key k;
  value v;
};
typedef thang_s thang;

struct thing_s {
  sym hint;
  key k;
};
typedef thing_s thing;


/** Handle to any data */
/* this is when a jh is interpreted, ok? otherwise it;s short */
struct key_s {
  octet self;
  octet inner;
  octet other;
  octet meta;
};
typedef key_s key_t; 

/** basic value  */
struct value_s {
  value meta; /** you get through meta in order to get your hands on self, ok? meta is a function.*/
  value self;
};

/** instanced data, value */
struct valuei_ {
  key id;
  value self; /** pointer to the data */
  hint inner; /** inner structure of this instanced data, identification */
  value other; /** meta information inside it after iterpret. */  
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

/** this is the basic language of this lib... please keep this paradise klean, ok? */
typedef glyph (*form)(glyph d); /** form... (acquire data format OR transform OR functional transform) */
typedef glyph (*binary)(glyph a, glyph b);
typedef glyph (*tertiary)(glyph a, glyph b, glyph c);
typedef glyph (*quad)(glyph a, glyph b, glyph c);

typedef glyph* (*string) (glyph a); /** this is empties a pool of glyphs each time called, depends on a single glyph */

/** meaning */
typedef glyph (*strings)(glyph a, value meta);


typedef glyph (*split)(string me);
typedef glyph (*unit)(glyph sub, glyph pred, glyph obj);
typedef glyph (*text)(string start, string end, string advance, split asplit)


#endif

