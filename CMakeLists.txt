# CMakeList.txt: проект CMake для MATE2021; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (MATE2021 "MATE2021.cpp" "MATE2021.h" "Rov.cpp" "Rov.h" "ThrustersSubsystem.h" "ThrustersSubsystem.cpp" "AdditionalFunctions.h" "AdditionalFunctions.cpp")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
