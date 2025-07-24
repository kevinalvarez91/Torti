# Torti

Torti is a lightweight and efficient shell designed to run seamlessly within your native terminal environment. Ideal for users who prefer minimalism and speed, Torti incorporates a range of built-in functions to streamline your command-line experience. Among these built-in commands are essential utilities such as ls, pwd, cmd, get_os_username, and get_os_time.

## Features
### Built-in Commands
- **ls** : Lists the contents of a directory, similar to the Unix command, showcasing files and directories.
- **pwd** : Prints the current working directory to help you keep track of your location within the file system.
- **cmd** : Custom and flexible command execution, enabling you to perform a wide range of tasks.
- **get_os_username** : Retrieves and displays the username of the currently logged-in user.
- **get_os_time** : Provides the current time according to the operating system's clock.

## Performance
Torti is optimized for performance, designed to execute commands swiftly and with minimal resource usage. This makes it particularly suitable for environments where speed and efficiency are paramount.

## Compatibility
Torti runs on a variety of Unix-like operating systems, ensuring broad compatibility across different platforms. Whether you are using Linux, macOS, or any other POSIX-compliant system, Torti integrates smoothly.

## Customization
Torti shines in its flexibility and ease of customization. It is fully open-source, hosted on a public repository to encourage contributions and modifications. Users have full access to the source code and are encouraged to tailor Torti to their specific needs.

## Adding Custom Functions
To enhance Torti with new functionalities, you can simply modify the builtin.c and builtin.h files. These files contain the core implementations of the built-in commands. By defining new functions and incorporating them into these files, you can expand Torti’s capabilities. Here’s a brief guide on how to do this:

1. **Define Your Function** : Write your new function in the builtin.c file. Ensure that the function adheres to the conventions used by existing built-ins.

    ```c
    void my_custom_function(){
        // function implementation
    }
    ```
2. **Declare Your Function** : Add the prototype of your new function in the builtin.h file to make it known to the rest of the shell.
    ```c
    // Function prototype
    void my_custom_function(); 
    ```
3. **Integrate** : Ensure your new function is registered within the shell’s command handling logic so it can be called just like any other built-in command.

## Community and Support
Join our community of developers and power users on platforms like GitHub, where you can share your custom functions, report issues, and contribute to the ongoing development of Torti. Comprehensive documentation and an active forum ensure you have the resources and support you need to get the most out of Torti.

## Installation
Installing Torti is straightforward, often requiring just a few steps. 

~~~sh
git clone https://github.com/kevinalvarez91/Torti.git
cd torti
make
./torti
~~~

## Contribution
We highly encourage contributions from the community to help make Torti better and more versatile. Whether you’re fixing bugs, adding new features, or improving documentation, your input is valued. Follow the contribution guidelines outlined in our repository to start contributing.

## License
Torti is distributed under the MIT License, allowing you to freely use, modify, and distribute the software with minimal restrictions. Please refer to the LICENSE file in the repository for the full text of the license.

## Conclusion
Torti is more than just a shell; it's a tool designed to boost your productivity by providing essential utilities in a lightweight package. Its open-source nature and ease of customization make it a versatile choice for both casual users and developers looking to optimize their terminal experience. Dive into the world of Torti and make it your own!

