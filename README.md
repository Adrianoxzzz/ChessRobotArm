# ChessRobotArm
ChessRobotArm — A 6-DOF robotic arm designed to play chess autonomously. Programmed using Arduino and Python, with MATLAB simulations and kinematic testing.

# ♟️ ChessRobotArm

**ChessRobotArm** is a 6 Degrees of Freedom (DOF) robotic arm built to play chess autonomously.  
It combines **Arduino** for real-time control, **Python** for board state processing and move logic, and **MATLAB** for simulation, kinematic analysis, and trajectory testing.

---

## 🧠 Overview

The system integrates hardware and software layers to make the robot capable of perceiving, deciding, and executing chess moves on a real board.

- **Arduino**: Controls servo motors and processes movement commands.  
- **Python**: Communicates with the chessboard (via FEN notation), interprets moves, and sends them to the robot.  
- **MATLAB**: Used for forward/inverse kinematics, workspace visualization, and motion validation before hardware testing.

---

## ⚙️ Features

- 6-DOF robotic arm with precise control.  
- Integration with digital chessboards and FEN-based communication.  
- Path planning and move validation using MATLAB simulations.  
- Serial communication between Python and Arduino.  
- Modular design for easy tuning and calibration.

---

## 🧩 Technologies Used

| Component | Purpose |
|------------|----------|
| **Arduino** | Motor control and low-level movement execution |
| **Python** | High-level logic, FEN decoding, and serial communication |
| **MATLAB** | Simulation, kinematic analysis, and trajectory generation |
| **ESP32 (optional)** | For wireless connection with online chess APIs (e.g., Lichess) |

---

## 📷 Demonstrations (Coming Soon)

- 3D simulation in MATLAB  
- Real robot performing chess moves  
- Integration with digital chessboard

---

## 🧑‍💻 Author

**Adriano Spinola**  
Passionate about robotics, automation, and AI-driven systems.  
Project focused on integrating mechanical precision with intelligent decision-making.

---

## 📜 License

This project is released under the **MIT License** — feel free to use, modify, and contribute!

---

### ⭐ If you like this project, consider giving it a star!
