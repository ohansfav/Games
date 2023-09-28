# GAMES

[RANDOM GAMES]

## Description

[THE GAME INVOLVES CHOSING A RANDOM NUMBER TO GET THE ACTUAL NUMBER.]

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Game Development](#game-development)
- [Contributing](#contributing)
- [License](#license)

## Installation

### C
## Installation

1. **Install a C compiler**: If you don't have a C compiler installed on your system, you'll need to install one. One popular option is GCC (GNU Compiler Collection), which is available on various platforms.

    - On Linux: You can install GCC through the package manager. For example, on Ubuntu, open the terminal and run the following command:
      ```
      sudo apt-get install build-essential
      ```

   - On macOS: Install the Xcode Command Line Tools, which include the Clang compiler. Open the Terminal and execute the following command:
      ```
      xcode-select --install
      ```

   - On Windows: You can use MinGW (Minimalist GNU for Windows) or Cygwin to set up a C compiler. Follow the installation instructions provided by the respective project.

2. **Text Editor**: Choose a text editor or an integrated development environment (IDE) to write your C code. Some popular options include Visual Studio Code, Code::Blocks, and Dev-C++.

## Game Implementation
1. Open a text editor and copy the above code into a new file. Save the file with a `.c` extension, such as `random_number_game.c`.

2. Compile the C program using a C compiler. Open a terminal or command prompt and navigate to the directory where you saved the file. Use the following command to compile the code with GCC:

   ````bash
   gcc random_number_game.c -o random_number_game
   ```

   This command will generate an executable file named `random_number_game` in the same directory.

3. Run the game by executing the generated executable:

   - On Linux/macOS, use the following command:
     ```bash
     ./random_number_game
     ```

   - On Windows, use the following command:
     ```
     random_number_game.exe
     ```

4. The game will start, and you will be prompted to enter your guess. Follow the instructions, enter a number between 1 and 100, and press Enter. The game will provide feedback if your guess is too high or too low. Continue guessing until you correctly guess the random number.

That's it! You have successfully set up and run the random number game in C. Feel free to modify the code or add additional features to enhance the game experience.

```bash
# I use codeblocks which is quite easy to install games
```

### Python
## Installation

1. **Install Python**: If you don't have Python installed on your system, you'll need to install it. You can download the latest version of Python from the official Python website (https://www.python.org/downloads/) and follow the installation instructions specific to your operating system.

2. **Text Editor**: Choose a text editor or an integrated development environment (IDE) to write your Python code. Some popular options include Visual Studio Code, PyCharm, and Atom.

## Game Implementation

Here's a simple example of a random number game in Python:

```python
import random

def play_game():
    random_num = random.randint(1, 100)
    attempts = 0

    print("Welcome to the Random Number Game!")

    while True:
        guess = input("Enter your guess (between 1 and 100): ")
        guess = int(guess)
        attempts += 1

        if guess > random_num:
            print("Too high! Try again.")
        elif guess < random_num:
            print("Too low! Try again.")
        else:
            print(f"Congratulations! You guessed the correct number in {attempts} attempts.")
            break

play_game()
```

1. Open a text editor and copy the above code into a new file. Save the file with a `.py` extension, such as `random_number_game.py`.

2. Open a terminal or command prompt and navigate to the directory where you saved the file.

3. Run the game by executing the Python script with the following command:

   ````bash
   python random_number_game.py
   ```

   If you have multiple Python versions installed, you may need to use `python3` instead of `python` in the command.

4. The game will start, and you will be prompted to enter your guess. Follow the instructions, enter a number between 1 and 100, and press Enter. The game will provide feedback if your guess is too high or too low. Continue guessing until you correctly guess the random number.

That's it! You have successfully set up and run the random number game using Python. Feel free to modify the code or add additional features to enhance the game experience.

```bash
# I use pycharm also easy to install
```

### Java

[## Installation

1. **Install Java Development Kit (JDK)**: If you don't have Java installed on your system, you'll need to install the Java Development Kit (JDK). You can download the latest version of JDK from the Oracle website (https://www.oracle.com/java/technologies/javase-jdk11-downloads.html) and follow the installation instructions specific to your operating system.

2. **Text Editor or Integrated Development Environment (IDE)**: Choose a text editor or an Integrated Development Environment (IDE) to write your Java code. Some popular options include Eclipse, IntelliJ IDEA, and Visual Studio Code with Java extensions.

## Game Implementation

1. Open a text editor or your preferred Java IDE and copy the above code into a new Java file. Save the file with a `.java` extension, such as `RandomNumberGame.java`.

2. Open a terminal or command prompt and navigate to the directory where you saved the file.

3. Compile the Java code using the Java compiler (`javac`) by running the following command:

   ````bash
   javac RandomNumberGame.java
   ```

   This command will generate a compiled bytecode file named `RandomNumberGame.class` in the same directory.

4. Run the game by executing the compiled bytecode with the following command:

   ````bash
   java RandomNumberGame
   ```

   The game will start, and you will be prompted to enter your guess. Follow the instructions, enter a number between 1 and 100, and press Enter. The game will provide feedback if your guess is too high or too low. Continue guessing until you correctly guess the random number.

That's it! You have successfully set up and run the random number game using Java. Feel free to modify the code or add additional features to enhance the game experience.

If you have any further questions or need additional assistance, feel free to ask!]

```bash
# I use netbeans ide
```

## Usage

[just follow the instructions and input appropriate  random numbers]

## Game Development 
[I use netbeans ide, pycharm and codeblocks to create the game individually]

## Contributing

[i welcome any assistance if available.]

## License

[MIT License

Copyright (c) [2023] [kiara]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE..]


                                 Apache License
                           Version 2.0, January 2004
                        http://www.apache.org/licenses/

   TERMS AND CONDITIONS FOR USE, REPRODUCTION, AND DISTRIBUTION

   1. Definitions.

      "License" shall mean the terms and conditions for use, reproduction,
      and distribution as defined by Sections 1 through 9 of this document.

      "Licensor" shall mean the copyright owner or entity authorized by
      the copyright owner that is granting the License.

      "Legal Entity" shall mean the union of the acting entity and all
      other entities that control, are controlled by, or are under common
      control with that entity. For the purposes of this definition,
      "control" means (i) the power, direct or indirect, to cause the
      direction or management of such entity, whether by contract or
      otherwise, or (ii) ownership of fifty percent (50%) or more of the
      outstanding shares, or (iii) beneficial ownership of such entity.

      "You" (or "Your") shall mean an individual or Legal Entity
      exercising permissions granted by this License.

      "Source" form shall mean the preferred form for making modifications,
      including but not limited to software source code, documentation
      source, and configuration files.

      "Object" form shall mean any form resulting from mechanical
      transformation or translation of a Source form, including but
      not limited to compiled object code, generated documentation,
      and conversions to other media types.

      "Work" shall mean the work of authorship, whether in Source or
      Object form, made available under the License, as indicated by a
      copyright notice that is included in or attached to the work
      (an example is provided in the Appendix below).

      "Derivative Works" shall mean any work, whether in Source or Object
      form, that is based on (or derived from) the Work and for which the
      editorial revisions, annotations, elaborations, or other modifications
      represent, as a whole, an original work of authorship. For the purposes
      of this License, Derivative Works shall not include works that remain
      separable from, or merely link (or bind by name) to the interfaces of,
      the Work and Derivative Works thereof.

      "Contribution" shall mean any work of authorship, including
      the original version of the Work and any modifications or additions
      to that Work or Derivative Works thereof, that is intentionally
      submitted to Licensor for inclusion in the Work by the copyright owner
      or by an individual or Legal Entity authorized to submit on behalf of
      the copyright owner. For the purposes of this definition, "submitted"
      means any form of electronic, verbal, or written communication sent
      to the Licensor or its representatives, including but not limited to
      communication on electronic mailing lists, source code control systems,
      and issue tracking systems that are managed by, or on behalf of, the
      Licensor for the purpose of discussing and improving the Work, but
      excluding communication that is conspicuously marked or otherwise
      designated in writing by the copyright owner as "Not a Contribution."

      "Contributor" shall mean Licensor and any individual or Legal Entity
      on behalf of whom a Contribution has been received by Licensor and
      subsequently incorporated within the Work.

   2. Grant of Copyright License. Subject to the terms and conditions of
      this License, each Contributor hereby grants to You a perpetual,
      worldwide, non-exclusive, no-charge, royalty-free, irrevocable
      copyright license to reproduce, prepare Derivative Works of,
      publicly display, publicly perform, sublicense, and distribute the
      Work and such Derivative Works in Source or Object form.

   3. Grant of Patent License. Subject to the terms and conditions of
      this License, each Contributor hereby grants to You a perpetual,
      worldwide, non-exclusive, no-charge, royalty-free, irrevocable
      (except as stated in this section) patent license to make, have made,
      use, offer to sell, sell, import, and otherwise transfer the Work,
      where such license applies only to those patent claims licensable
      by such Contributor that are necessarily infringed by their
      Contribution(s) alone or by combination of their Contribution(s)
      with the Work to which such Contribution(s) was submitted. If You
      institute patent litigation against any entity (including a
      cross-claim or counterclaim in a lawsuit) alleging that the Work
      or a Contribution incorporated within the Work constitutes direct
      or contributory patent infringement, then any patent licenses
      granted to You under this License for that Work shall terminate
      as of the date such litigation is filed.

   4. Redistribution. You may reproduce and distribute copies of the
      Work or Derivative Works thereof in any medium, with or without
      modifications, and in Source or Object form, provided that You
      meet the following conditions:

      (a) You must give any other recipients of the Work or
          Derivative Works a copy of this License; and

      (b) You must cause any modified files to carry prominent notices
          stating that You changed the files; and

      (c) You must retain, in the Source form of any Derivative Works
          that You distribute, all copyright, patent, trademark, and
          attribution notices from the Source form of the Work,
          excluding those notices that do not pertain to any part of
          the Derivative Works; and

      (d) If the Work includes a "NOTICE" text file as part of its
          distribution, then any Derivative Works that You distribute must
          include a readable copy of the attribution notices contained
          within such NOTICE file, excluding those notices that do not
          pertain to any part of the Derivative Works, in at least one
          of the following places: within a NOTICE text file distributed
          as part of the Derivative Works; within the Source form or
          documentation, if provided along with the Derivative Works; or,
          within a display generated by the Derivative Works, if and
          wherever such third-party notices normally appear. The contents
          of the NOTICE file are for informational purposes only and
          do not modify the License. You may add Your own attribution
          notices within Derivative Works that You distribute, alongside
          or as an addendum to the NOTICE text from the Work, provided
          that such additional attribution notices cannot be construed
          as modifying the License.

      You may add Your own copyright statement to Your modifications and
      may provide additional or different license terms and conditions
      for use, reproduction, or distribution of Your modifications, or
      for any such Derivative Works as a whole, provided Your use,
      reproduction, and distribution of the Work otherwise complies with
      the conditions stated in this License.

   5. Submission of Contributions. Unless You explicitly state otherwise,
      any Contribution intentionally submitted for inclusion in the Work
      by You to the Licensor shall be under the terms and conditions of
      this License, without any additional terms or conditions.
      Notwithstanding the above, nothing herein shall supersede or modify
      the terms of any separate license agreement you may have executed
      with Licensor regarding such Contributions.

   6. Trademarks. This License does not grant permission to use the trade
      names, trademarks, service marks, or product names of the Licensor,
      except as required for reasonable and customary use in describing the
      origin of the Work and reproducing the content of the NOTICE file.

   7. Disclaimer of Warranty. Unless required by applicable law or
      agreed to in writing, Licensor provides the Work (and each
      Contributor provides its Contributions) on an "AS IS" BASIS,
      WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
      implied, including, without limitation, any warranties or conditions
      of TITLE, NON-INFRINGEMENT, MERCHANTABILITY, or FITNESS FOR A
      PARTICULAR PURPOSE. You are solely responsible for determining the
      appropriateness of using or redistributing the Work and assume any
      risks associated with Your exercise of permissions under this License.

   8. Limitation of Liability. In no event and under no legal theory,
      whether in tort (including negligence), contract, or otherwise,
      unless required by applicable law (such as deliberate and grossly
      negligent acts) or agreed to in writing, shall any Contributor be
      liable to You for damages, including any direct, indirect, special,
      incidental, or consequential damages of any character arising as a
      result of this License or out of the use or inability to use the
      Work (including but not limited to damages for loss of goodwill,
      work stoppage, computer failure or malfunction, or any and all
      other commercial damages or losses), even if such Contributor
      has been advised of the possibility of such damages.

   9. Accepting Warranty or Additional Liability. While redistributing
      the Work or Derivative Works thereof, You may choose to offer,
      and charge a fee for, acceptance of support, warranty, indemnity,
      or other liability obligations and/or rights consistent with this
      License. However, in accepting such obligations, You may act only
      on Your own behalf and on Your sole responsibility, not on behalf
      of any other Contributor, and only if You agree to indemnify,
      defend, and hold each Contributor harmless for any liability
      incurred by, or claims asserted against, such Contributor by reason
      of your accepting any such warranty or additional liability.

   END OF TERMS AND CONDITIONS

   Copyright [2023] [kiara]

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
]
