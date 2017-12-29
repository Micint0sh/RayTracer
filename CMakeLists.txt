cmake_minimum_required(VERSION 3.9)
project(RayTracer)

set(CMAKE_CXX_STANDARD 11)

add_executable(RayTracer
        Core-Dependencies/Camera.cpp
        Core-Dependencies/Camera.hpp
        Core-Dependencies/Color.hpp
        Core-Dependencies/Film.cpp
        Core-Dependencies/Film.hpp
        Core-Dependencies/Image.hpp
        Core-Dependencies/Intersection.hpp
        Core-Dependencies/LocalGeo.hpp
        main.cpp
        Core-Dependencies/Normal.cpp
        Core-Dependencies/Normal.hpp
        Core-Dependencies/Point2D.cpp
        Core-Dependencies/Point2D.hpp
        Core-Dependencies/Point3D.cpp
        Core-Dependencies/Point3D.hpp
        Core-Dependencies/PPMImage.cpp
        Core-Dependencies/PPMImage.hpp
        Primitives/Primitive.hpp
        Core-Dependencies/Ray.cpp
        Core-Dependencies/Ray.hpp
        Core-Dependencies/RayTracer.cpp
        Core-Dependencies/RayTracer.hpp
        Core-Dependencies/Sample.hpp
        Core-Dependencies/Sampler.hpp
        Core-Dependencies/Scene.cpp
        Core-Dependencies/Scene.hpp
        Primitives/Sphere.cpp
        Primitives/Sphere.hpp
        Core-Dependencies/Vector.cpp
        Core-Dependencies/Vector.hpp
        Materials/Material.hpp Materials/Lambertian.hpp Materials/Lambertian.cpp Lights/Light.hpp Lights/PointLight.cpp Lights/PointLight.hpp)
