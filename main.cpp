#include <iostream>
#include <xtensor/xarray.hpp>
#include <xtensor/xio.hpp>
#include <xtensor/xview.hpp>


int main(int argc, char** argv)
{
    int result = 0;

    xt::xarray<double> arr1{ { 1.0, 2.0, 3.0 }, { 4.0, 5.0, 6.0 }, { 7.0, 8.0, 9.0 } };

    xt::xarray<double> arr2{ 5.0, 6.0, 7.0 };

    // Add second row to second array
    xt::xarray<double> res = xt::view(arr1, 1) + arr2;

    std::cout << res << std::endl;

    std::cout << "Hello" << std::endl;

    return result;
}
