#include "product.h"

class Movie : public Product{
public: 
    Movie(const std::string category, const std::string name, double price, int qty, const std::string genre, const std::string rating);
    virtual ~Movie();
    virtual std::set<std::string> keywords() const;
    virtual std::string displayString() const;
    virtual void dump(std::ostream& os) const;

protected:
    std::string genre_;
    std::string rating_;
};
