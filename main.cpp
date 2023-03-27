#include <iostream>

int main()
{
    // Declaring array
    // int scores[10]; // Junk Data

    // Reading values
    /*
    std::cout<< std::endl;
    std::cout<< "Reading out scores values (manually) : " << std::endl;
    std::cout << "scores[0] : " << scores[0] << std::endl;
    std::cout << "scores[1] : " << scores[1] << std::endl;
    //..
    std::cout << "scores[9] : " << scores[9] << std::endl;
    */

    // Read with a Loop
    /*
    for(size_t i {0}; i < 10 ;  i++) {
          std:: cout << "scores ["<< i << "] : " << scores[i] << std::endl;
    }
    */
    // Write data into array
    /*
    scores[0] = 20;
    scores[1] = 21;
    scores[2] = 22;

    for (size_t i{0}; i < 10; i++)
    {
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;

    }
    */
    // * Write data in a loop
    /*
    for (size_t i{0}; i < 10; i++)
    {
        scores[i] = i * 10;
    }
    for (size_t i{0}; i < 10; i++)
    {
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
    */
    // Declare and initalize at the same time
    /*
     std::cout << std::endl;
     std::cout << "Decale and initialize at the same time : " << std::endl;
     double salaries[5] {12.5, 7.5 , 13.2 , 8.1, 9.3};
     for(size_t i {0}; i < 5; i++) {
         std::cout << " salary["<< i << "] : " << salaries[i] << std::endl;
     }
     */
    // If you dont initialize all the elements , those you leave out are initialized to 0
    /*
    int families[5] {12,7,5};
    for(size_t i{0};  i < 5; i++) {
        std::cout << " families["<< i << "] : " << families[i] <<std::endl;
    }
    */
    /*
     // Omit the size of the array at declaration
     int class_size[]{10, 12, 13, 42, 18, 17};
     // Will print this with a range based for loop

     for (auto value : class_size)
     {std::cout << "value : " << value << std::endl;
     }
     */
    //   const int birds[]{10, 12, 13, 42, 18, 17};
    //   birds[2] = 8; Compile error
    /*
    // Sum up scores array , store result in sum
    int scores [] {2,23,32,13,33,11};
    int sum = 0;

    for (int element : scores)
    {
        sum *= element;
    }
    std::cout << "Score sum : " << sum << std::endl;
    */
    // * Size of Array
    
    int scores[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    /*
    std::cout << "sizeof(scores) : " << sizeof(scores) << std::endl;
    std::cout << "sizeof(scores[0]) : " << sizeof(scores[0]) << std::endl;
    int count {sizeof(scores)/sizeof(scores[0])};
    std::cout << "cout is : " << count << std::endl; 
    // int count { std::size(scores)};
    /*
   for(size_t i{0}; i < count; i++) {
       std::cout << "score ["<< i << "] : " << scores[i] << std::endl;
   }
   
   */
    // Range based for loop
    for(auto i : scores) {
        std::cout << "value : " << i << std::endl;
    }

    return 0;
}