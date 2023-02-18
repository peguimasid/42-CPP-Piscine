template <class T>
class Array {
 private:
  /* TODO: private args*/
 public:
  // Constructors and Destructors
  Array();
  Array(unsigned int n);
  Array(const Array &other);
  Array &operator=(const Array &other);
  ~Array();
};
