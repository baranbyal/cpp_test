#include <iostream>
#include <tuple>
#include <string>
#include <fstream>

using namespace std;


int main() {
    /// Take "'{"ShipmentNumber":"34057585962","RouteCode":"DOH-1788","RouteDescription":"DOH-1788","SerialNumber":"300007","Date":"2023-03-29 11:11:51.930"}' \" as example
    /// Generate 10000 unique examples with different ShipmentNumber and RouteCode
    /// Output to a txt file
    int ShipmentNumber = 1;
    int RouteCode = 1788;
    // route description is the same as route code
    
    string outputFileName = "output.txt";
    // iterate through 10000 times
    // generate a new ShipmentNumber and RouteCode
    // write to file
    // close file

    // open file
    ofstream outputFile ;
    outputFile.open(outputFileName);
    // iterate through 10000 times
    for (int i = 0; i < 10000; i++) {
        // generate a new ShipmentNumber and RouteCode
        ShipmentNumber++;
        RouteCode++;
        // write to file
        outputFile <<"                   " <<"'{\"ShipmentNumber\":\"" << ShipmentNumber << "\",\"RouteCode\":\"DOH-" << RouteCode << "\",\"RouteDescription\":\"DOH-" << RouteCode << "\",\"SerialNumber\":\"" << 300007 << "\",\"Date\":\"" << "2023-03-29 11:11:51.930\"}' \\" << endl;
        // outputFile <<ShipmentNumber << endl;
        // outputFile << "'{"ShipmentNumber":" << ShipmentNumber << ","RouteCode":" << RouteCode << ","RouteDescription":" << RouteCode << ","SerialNumber":" << 300007 << ","Date":" << 2023-03-29 11:11:51.930"}' \" << endl;
    }
    // close file
    outputFile.close();





    return 0;
}
