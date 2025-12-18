# FWR Labs

This repository contains the starter code for our four lab assignments:

- **square_lab_starter**: Movement pattern programming
- **photovore_starter**: Light-seeking robot implementation
- **control_lab_starter**: Motor control and feedback control system
- **servo_lab_starter**: Servo motor control with custom servo library

## How to Configure Arduino for Fun With Robots

### Prerequisites

> **Note:** The following setup steps are **always needed** when using a cluster computer, or when using Arduino **for the first time only** on a personal laptop.

1. **Install Arduino IDE**: Download from [https://tinyurl.com/arduinoDownload](https://tinyurl.com/arduinoDownload) if your computer does not already have Arduino.

2. **Add the Pololu Boards**
   - Open **File** → **Preferences**
   - In the "Additional Boards Manager URLs" field, paste: `https://files.pololu.com/arduino/package_pololu_index.json`
   - Press OK

3. **Download the A-Star Board**
   - Open **Tools** → **Board** → **Boards Manager**
   - Type in "Pololu A-Star Controllers"
   - When the "Pololu A-Star Controllers" board appears, install it

4. **Add the Romi Libraries**
   - Open **Sketch** → **Include Library** → **Manage Libraries**
   - Type in "Romi"
   - Find and install the "Romi 32U4" library (select the newest version)

5. **Connect Your Arduino Board**: Plug in your Romi board via USB

### Opening a Program

1. Open Arduino IDE
2. Go to **File → Open** and navigate to the lab folder
3. Select the `.ino` file (e.g., `servo_lab_starter.ino`)
4. The project will open with all associated files

### Running a Program

1. **Select Board**: Go to **Tools → Board** and select "Pololu A-Star 32U4"
2. **Select Port**: Go to **Tools → Port** and select the COM port your board is connected to
3. **Verify**: Click the **Verify** button (checkmark icon) to check for syntax errors
4. **Upload**: Click the **Upload** button (arrow icon) to compile and upload the program to your board

### Troubleshooting

- **Port not showing**: Ensure USB drivers are installed for your Arduino board
- **Upload errors**: Verify the correct board type and COM port are selected
