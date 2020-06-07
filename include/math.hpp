namespace kyopuro {

class mod_int {
  unsigned int value_;

public:
  mod_int(unsigned int value_) : value_(value_) {}
  mod_int &operator=(const unsigned int rhs) {
    value_ = rhs;
    return *this;
  }
};

} // namespace kyopuro
