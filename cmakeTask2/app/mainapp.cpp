#include <fstream>
#include <nlohmann/json.hpp>
#include <iostream>
using json = nlohmann::json;
using namespace std;

int main(){
    ifstream file("/home/omer/training/gccpractice/cmaketask2/cmake_tasks_config.json");
    if (!file) {
        cout << "Unable to open json file" << endl;
        return 1;
    }

    json config;
    file >> config;

    cout << "Parsed JSON: " << setw(4) << config << endl;

}