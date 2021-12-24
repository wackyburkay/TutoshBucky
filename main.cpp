#include <iostream>
#include "TutorialClasses/Recursion/Recursion.h"
#include "TutorialClasses/ArrayOps/ArrayOps.h"
#include "TutorialClasses/ConstantExample/ConstantExample.h"
#include "TutorialClasses/MemberInitExample/MemberInitExample.h"
#include "TutorialClasses/Templating/Templating.h"

int main() {
    //Recursion recursionObject;
    //std::cout << recursionObject.recursive_factorial(5) << std::endl;

    //çok güzel bir sized array sınıfı oldu bence.
    //ArrayOps arrayOpsObject;
    //arrayWithSize* array = arrayOpsObject.createOrderedIntArray(10);
    //arrayOpsObject.printArray(array);
    //std::cout << "Len: " << arrayOpsObject.sizeOfArray(array) << std::endl;
    //arrayOpsObject.destroyArray(array);
    //arrayOpsObject.printArray(array);
    //std::cout << "Len after destroy: " << arrayOpsObject.sizeOfArray(array) << std::endl;

    //const ConstantExample ce;
    //const olmayan metod const objeden çağırılamaz.
    //ce.funcThatIsConstant();
    //ce.functThatIsNotConstant();

    //eğer pointer tanımladıysan variable ve metodlara arrow member access operator ile ulaşırsın.
    //ConstantExample ce2;
    //ConstantExample* cePointer = &ce2;
    //cePointer->funcThatIsConstant();
    //cePointer->functThatIsNotConstant();

    //MemberInitExample mie(2,3);
    //mie.printVars();

    Templating<int> tempInt(5);
    Templating<double> tempDouble(4.789);
    Templating<std::string> tempString("nope");
    Templating<char> tempChar('x');
}
