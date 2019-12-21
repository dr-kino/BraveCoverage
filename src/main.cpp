#include <boost/program_options.hpp>
namespace po = boost::program_options;

#include <iostream>
#include <iterator>
#include "brave_coverage.hpp"

using namespace std;

int main(int ac, char* av[])
{
    Sum SumObj;

    try {

        po::options_description desc("Allowed options");
        desc.add_options()
            ("help", "produce help message")
            ("value_a", po::value<int>(), "set value a")
            ("value_b", po::value<int>(), "set value b")
            ("sum", "execute sum operation")
        ;

        po::variables_map vm;        
        po::store(po::parse_command_line(ac, av, desc), vm);
        po::notify(vm);    

        if (vm.count("help")) {
            cout << desc << "\n";
            return 0;
        }

        if (vm.count("value_a")) {
            cout << "Value A was set to " 
                 << vm["value_a"].as<int>() << ".\n";
            SumObj.setAValue(vm["value_a"].as<int>());
        } else {
            cout << "No input file\n";
        }

        if (vm.count("value_b")) {
            cout << "Value B was set to " 
                 << vm["value_b"].as<int>() << ".\n";
            SumObj.setBValue(vm["value_b"].as<int>());
        } else {
            cout << "No input file\n";
        }

        if (vm.count("sum")) {
            cout << "Executing sum operation..." << "\n";
            cout << "Sum: " << SumObj.executeSum() << "\n";
        }
    }
    catch(exception& e) {
        cerr << "error: " << e.what() << "\n";
        return 1;
    }
    catch(...) {
        cerr << "Exception of unknown type!\n";
    }

    return 0;
}