# 🎯 One-Axis Self-Stabilizing Gimbal using MPU6050 and PD Control

A real-time one-axis stabilization system built using an Arduino Uno, MPU6050 IMU, and an SG90 servo motor. The project uses a **Proportional-Derivative (PD) controller** to maintain a platform in a horizontal position while the base is tilted manually.

The goal of this project was not only to build a stabilizer, but also to understand the fundamentals of **feedback control systems**, **sensor fusion**, and **embedded programming**.

---

## 📹 Demonstration

*(Add a GIF or video here)*

---

## ✨ Features

- Real-time one-axis stabilization
- MPU6050 IMU integration
- Complementary-filtered angle estimation (using the MPU6050_tockn library)
- PD (Proportional-Derivative) controller
- Smooth servo response with experimentally tuned gains
- Simple and lightweight implementation

---

## 🛠 Hardware Used

- Arduino Uno
- MPU6050 IMU
- SG90 Servo Motor
- Breadboard
- Jumper wires
- Cardboard platform

---

## ⚙️ Working Principle

The MPU6050 continuously estimates the tilt angle of the platform.

The controller computes the error between the desired angle (horizontal) and the measured angle.

A PD controller calculates the correction:

```
Correction = Kp × Error − Kd × Angular Velocity
```

The servo rotates in the opposite direction of the disturbance, keeping the platform approximately horizontal.

---

## 🧠 Why PD instead of PID?

A PD controller was chosen because this project is a stabilization system rather than a position control system.

- **P (Proportional)** corrects the tilt angle.
- **D (Derivative)** dampens rapid motion using the gyroscope's angular velocity.
- **I (Integral)** was intentionally omitted to avoid integral windup and because there is little steady-state error in this application.

---

## 📊 Tuned Parameters

| Parameter | Value |
|-----------|-------|
| Kp | 1.2 |
| Kd | 0.08 |

These values were obtained experimentally by observing overshoot, responsiveness, and smoothness.

---

## 📂 Project Structure

```
One-Axis-Gimbal/
│
├── One_Axis_Gimbal.ino
├── README.md
└── test-codes/
    ├── P-cont-only.ino
    └── simple-io-feeback.ino
```

---

## 🔌 Wiring

| MPU6050 | Arduino Uno |
|----------|-------------|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

| Servo | Arduino Uno |
|--------|-------------|
| Signal | D9 |
| VCC | 5V |
| GND | GND |

---

## 📚 Libraries Used

- Wire.h
- Servo.h
- MPU6050_tockn

---

## 🚀 Future Improvements

- Implement custom complementary filter from raw MPU6050 data
- Upgrade to a 2-axis stabilizer
- Port the project to STM32
- Replace the hobby servo with a brushless gimbal motor
- Add OLED display for live telemetry
- Implement Kalman filtering

---

## 📖 Concepts Learned

- Embedded Systems
- Feedback Control Systems
- Proportional-Derivative (PD) Control
- IMU Fundamentals
- Accelerometer vs Gyroscope
- Sensor Fusion
- Servo Control
- Gain Tuning
- Real-Time Embedded Programming

---

## 📸 Images

*(Add photos of your setup here.)*

---

## 📄 License

This project is released under the MIT License.

---

## 👨‍💻 Author

**Utkarsh Poojari**

Electronics & Computer Science Engineering

