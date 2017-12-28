cmake_minimum_required(VERSION 3.9)
project(RayTracer)

set(CMAKE_CXX_STANDARD 11)

add_executable(RayTracer
        Camera.cpp
        Camera.hpp
        Color.hpp
        Film.cpp
        Film.hpp
        Image.hpp
        Intersection.hpp
        LocalGeo.hpp
        main.cpp
        Normal.cpp
        Normal.hpp
        Point2D.cpp
        Point2D.hpp
        Point3D.cpp
        Point3D.hpp
        PPMImage.cpp
        PPMImage.hpp
        Primitive.hpp
        Ray.cpp
        Ray.hpp
        RayTracer.cpp
        RayTracer.hpp
        Sample.hpp
        Sampler.hpp
        Scene.cpp
        Scene.hpp
        Sphere.cpp
        Sphere.hpp
        Vector.cpp
        Vector.hpp BRDF.hpp)
