#ifndef TYPEWRITER_H_INCLUDED
#define TYPEWRITER_H_INCLUDED

class Integer
{
public:
  Integer() { i = 0; }
  Integer(int val) { i = val; }
  Integer(const Integer& other) { i = other.value(); }
  int value() { return i; }
  Integer operator=(int val) { i = val; return new Integer(i); }
private:
  int i;
};

int operator=(int lhs, const Integer& rhs)
{
  lhs = rhs.value(); return lhs;
}

class Decimal
{
public:
  Decimal() { i = 0.0; }
  Decimal(double val) { i = val; }
  Decimal(const Decimal& other) { i = other.value(); }
  double value() { return i; }
  double operator=(double val) { i = val; return i; }
private:
  double i;
};

double operator=(double lhs, const Decimal& rhs)
{
  lhs = rhs.value(); return lhs;
}

class OutOfRangeException
{
public:
  OutOfRangeException(int valueIn, int rangeMinIn, int rangeMaxIn)
  {
    value = valueIn; rangeMin = rangeMinIn; rangeMax = rangeMaxIn;
  }
  int value, rangeMin, rangeMax;
}

#define DEFINE_INTEGER_TYPE(t) class #t : public Integer \
{ \
  #t() { super(); } \
  #t(int val) { super(val); } \
  #t(const #t& other) { super(other); } \
};

#define DEFINE_DECIMAL_TYPE(t) class #t: public Decimal \
{\
  #t() { super(); } \
  #t(int val) { super(val); } \
  #t(const #t& other) { super(other); } \
}

#endif // ifndef TYPEWRITER_H_INCLUDED
