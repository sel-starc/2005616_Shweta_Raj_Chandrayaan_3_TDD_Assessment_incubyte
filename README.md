# 2005616_Shweta_Raj_Chandrayaan_3_TDD_Assessment_incubyte
**Chandrayaan 3 Lunar Craft: Galactic Space Craft Control**

---
<br>
<br>
Edits: I have made it more modular and made commits following the TDD rules
<br>
<br>
1.Solved the problem with TDD, i.e., the commit history should indicate that the TDD process was followed.
<br>
2.Additionally, the code itself was made a bit more modular and properly formatted.
<br>
<br>
 Test Driven Development in terms of three simple rules. They are:
<br>
<br>
 1. You are not allowed to write any production code unless it is to make a failing unit test pass.
<br>
 2. You are not allowed to write any more of a unit test than is sufficient to fail and compilation failures are failures.
<br>
 3. You are not allowed to write any more production code than is sufficient to pass the one failing unit test.
 <br>
 <br>
**Description**:
The Chandrayaan 3, ISRO's latest lunar spacecraft, roams the vast expanses of the galaxy, guided by commands from Earth. As the scientist in charge, your mission is to develop a program that translates these commands into actions for Chandrayaan 3. 

The spacecraft navigates using the galactic coordinate system, marked by (x, y, z) coordinates:
- `x`: East/West location.
- `y`: North/South location.
- `z`: Distance above/below the galactic plane.

---

**Requirements**:

1. **Starting Point**: The initial position of the spacecraft in terms of (x, y, z) coordinates.
   
2. **Initial Direction**: The direction the spacecraft is facing (N, S, E, W, Up, Down).
   
3. **Command Set**: A character array of commands which:
   
   - `f`: Move the spacecraft one step forward in its current direction.
   - `b`: Move the spacecraft one step backward in its current direction.
   - `l`: Rotate the spacecraft 90 degrees to its left.
   - `r`: Rotate the spacecraft 90 degrees to its right.
   - `u`: Change the spacecraft's angle to point upwards.
   - `d`: Change the spacecraft's angle to point downwards.

**Assumptions**:
- The spacecraft's initial direction (N, S, E, W, Up, Down) serves as the reference for its movement and rotation.
- The spacecraft moves rigidly: no diagonal movements and can only move in the direction it faces.
- The spacecraft cannot breach galactic boundaries.

---

**Example**:

**Inputs**:

Starting Point: (0, 0, 0)

Initial Direction: N

Commands: ["f", "r", "u", "b", "l"]

**Execution**:

1. "f" results in position (0, 1, 0) facing N.
2. "r" results in the same position, but now facing E.
3. "u" retains the position but changes direction to U (Up).
4. "b" moves to (0, 1, -1) still facing U (Up).
5. "l" does not change the position but shifts direction to N.
<br>
<br>
   **Logic**
   <br>
   <img width="496" alt="image" src="https://github.com/sel-starc/2005616_Shweta_Raj_Chandrayaan_3_TDD_Assessment/assets/90095060/e5169d9f-fab7-467b-a302-b9a179708a25">
   <br>

**Output**:

Final Position: (0, 1, -1)

Final Direction: N

---

**Development Guidelines**:
1. **Incremental Approach**: Build the program incrementally. Capture each step's progress in separate commits.
2. **Code Quality**: Prioritize readability, clarity, and modular design.
3. **Error Handling**: Instead of throwing exceptions for invalid commands, the system should handle them gracefully.
   <br>
<br>
   **screenshots:**
   <br>
   <img width="171" alt="image" src="https://github.com/sel-starc/2005616_Shweta_Raj_Chandrayaan_3_TDD_Assessment/assets/90095060/a88b0c40-8c66-4257-af1b-1a79abce0c70">
   <br>
   <img width="165" alt="image" src="https://github.com/sel-starc/2005616_Shweta_Raj_Chandrayaan_3_TDD_Assessment/assets/90095060/61137e6f-e52e-4faf-adbb-35c1ee24e11b">
   <br>
   <img width="173" alt="image" src="https://github.com/sel-starc/2005616_Shweta_Raj_Chandrayaan_3_TDD_Assessment/assets/90095060/2e3c209d-975a-452b-b0f6-6448f407a4b8">
   <br>
   <img width="173" alt="image" src="https://github.com/sel-starc/2005616_Shweta_Raj_Chandrayaan_3_TDD_Assessment/assets/90095060/a82cbef3-fcb2-4b44-b86f-d4dd420be409">
   <br>
   <img width="167" alt="image" src="https://github.com/sel-starc/2005616_Shweta_Raj_Chandrayaan_3_TDD_Assessment/assets/90095060/be18cae3-4c5b-402e-aa5a-558a007a41d7">
   <br>







---

This readme provides a comprehensive guide for the Chandrayaan 3's Galactic Space Craft Control Program. Always refer back to ensure each command is executed with precision. Safe travels in the galaxy!
