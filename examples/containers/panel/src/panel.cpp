#include <xtd/xtd.forms>

using namespace xtd;
using namespace xtd::forms;

class form1 : public form {
public:
  form1() {
    this->text("Panel example");
    this->location({200, 200});
    this->client_size({640, 480});
    
    group_box1.parent(*this);
    group_box1.border_style(forms::border_style::fixed_single);
    group_box1.location({10, 10});
    group_box1.size({305, 460});

    group_box2.parent(*this);
    group_box2.border_style(forms::border_style::fixed_3d);
    group_box2.location({325, 10});
    group_box2.size({305, 460});
  }
  
private:
  panel group_box1;
  panel group_box2;
};

int main() {
  application::run(form1());
}
