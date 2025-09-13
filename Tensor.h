//
// Created by afshaazi on 9/10/25.
//

#ifndef DATALAYER_TENSOR_H
#define DATALAYER_TENSOR_H
#include <memory>
// #include <utility>  //declarations of unique_ptr

class Tensor;
class ITensor;

// Abstract Factory
class ITensorFactory {
public:
    virtual std::unique_ptr<ITensor> createTensor() const = 0;
    virtual std::unique_ptr<Multiplier> createMultiplier() const = 0;
    // virtual std::unique_ptr<TextField> createTextField() const = 0;
    virtual ~ITensorFactory() = default;
};

class ITensor {
public:
    virtual std::unique_ptr<ITensorData> getTensorData() const = 0;
    virtual int setTensorData(ITensorData _tensor_data) ;

};


// Interface
class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual void display() const = 0;
    virtual ~Shape() = default;
};

#endif  //DATALAYER_TENSOR_H
