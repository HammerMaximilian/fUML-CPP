<img src="logo.png" width="300"/>

# fUML/PSCS Reference Implementation for *C++*
This software is an open source reference implementation of the *Semantics of a Foundational Subset for Executable UML Models* (fUML) and *Precise Semantics of UML Composite Structures* (PSCS) specifications by the *Object Management Group* (OMG) (see [fUML](https://www.omg.org/spec/FUML/1.5/About-FUML) and [PSCS](https://www.omg.org/spec/PSCS/1.2/About-PSCS)). The fUML implementation of this software is based on the Java fUML reference implementation developed by
*Model Driven Solutions* (see [https://github.com/ModelDriven/fUML-Reference-Implementation](https://github.com/ModelDriven/fUML-Reference-Implementation))

## Licensing
For licensing information, please see the [LICENSE.md](https://github.com/HammerMaximilian/fUML-CPP/blob/master/LICENSE) file.

## Prerequisites
For detailed information, please see the [User Guide](fUML-C++_User_Guide.pdf) section *1. Prerequisites*.
### 1. Required Software
* Compiler: *GCC* (Linux) or *MinGW-w64* (Windows)
* *Java Runtime Environment*
* *Eclipse CDT* or any Eclipse IDE with *C++-Development Tools* installed
### 2. Recommended but optional Software
* *Eclipse Modeling Tools* for creating UML models
* *Eclipse Papyrus* for more sophisticated and graphical modeling of UML models
* *Acceleo* to be able to use the code generator for executable models

## Setup
For detailed information, please see the [User Guide](fUML-C++_User_Guide.pdf) section *2. Setup*.
### 1. Setting up Eclipse
* Import fUML-C++ root project *fUML-CPP* into your workspace
* Import nested projects *uml* and *fuml*
### 2. Environment Variables
* Add binary directories paths of *uml* and *fuml* to your system's environment variables (e.g. add them to PATH in Windows)
* Depending on whether you want to build debug version, release version or both versions of the dynamic libraries:
  * `"<fUML-C++-rootdir>\uml\Debug"` for debug version of uml
  * `"<fUML-C++-rootdir>\uml\Release"` for release version of uml
  * `"<fUML-C++-rootdir>\fuml\Debug"` for debug version of fuml
  * `"<fUML-C++-rootdir>\fuml\Release"` for release version of fuml

## Building
For detailed information, please see the [User Guide](fUML-C++_User_Guide.pdf) section *3. Build*.
* Build dynamic libraries for *uml* and *fuml* (**in that order**) using Eclipse C++-Development Tools managed build
* Depending on your preferences and needs, build debug, release or both

## Usage
For detailed information, please see the [User Guide](fUML-C++_User_Guide.pdf) section *4. Usage*.
### 1. Creating executable models using source code
* Create new C++ project (see `"<fUML-C++-rootdir>\examples\helloworld"` as a reference project)
  * NOTE: it is suggested to store user-defined source code projects in common directory `"<fUML-C++-rootdir>\usersrc"`
  * The *usersrc* directory may contain arbitrary nested subdirectories
* Add include directories for uml and fuml to your project
* Add uml and fuml binaries to the linker options of your projects
* Create a `<model-name>Environment` class by deriving from class `fuml::environment::Environment` (or `pscs::environment::Environment` for PSCS-compatibility)
* Create a `<model-name>Model` class by deriving from class `uml::environment::InMemoryModel` (this class will contain all of your model elements)
* Create a class containing a main method and call `<model-name>Environment::Instance()->execute("<behavior-name>");` for each behavior you want to execute in subsequent order
* Build project and run executable 
### 2. Generating executable models from *.uml* models (*Acceleo* plugin for Eclipse has to be installed)
* Create new *.uml* model with a modeling tool of your choice (*Eclipse Papyrus* is suggested)
  * NOTE: it is suggested to store user-defined models in common directory `"<fUML-C++-rootdir>\usermodels"`
  * The *usermodels* directory may contain arbitrary nested subdirectories
* Import nested project *generator* within fUML-C++ root project
* Navigate to file `\generator\src\fuml.generator.main\generate.mtl` in the project explorer
* Right click `generate.mtl` and choose `Run as`-->`Run configurations...`
* Configure and run Acceleo Application accordingly:
  *  Choose `fuml.generator.main.Generate`
  *  Choose your model file
  *  Choose a target directory for the generated source code (`"<fUML-C++-rootdir>\usersrc\<model-name>"` is suggested)
* Import newly generated C++ project within fUML-C++ root project and build executable(s)
* Run executable from command line using `<executable-name> <behavior-name> [<behavior-name> <behavior-name> <behavior-name> <...>]`
