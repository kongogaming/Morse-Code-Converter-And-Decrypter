# 📡 Morse Code Cryptography Engine

![C Programming](https://img.shields.io/badge/Language-C-blue.svg)
![Build](https://img.shields.io/badge/Build-Passing-brightgreen.svg)
![Concept](https://img.shields.io/badge/Focus-File%20I%2FO%20%26%20String%20Parsing-orange.svg)

Welcome to the **Morse Code Cryptography Engine**. This project serves as the final capstone for my procedural C programming foundation. It is a lightweight, dual-module system designed to seamlessly translate standard English text into international Morse code, and decrypt Morse code back into human-readable text using persistent file streams.

---

## ⚡ Core Features

* **🔠 Text-to-Morse Encoding:** Captures raw string input and translates it character-by-character into Morse tokens.
* **🔍 Morse-to-Text Decoding:** Parses continuous streams of dots and dashes, leveraging space-delimiters to perfectly reconstruct the original English text.
* **💾 Persistent Data Storage:** Completely bypasses volatile RAM loss by utilizing C's File I/O (`fopen`, `fprintf`, `fscanf`) to save all inputs and outputs to local `.txt` databases (`data.txt` & `morse.txt`).
* **🛡️ Zero-Bloat Architecture:** Utilizes direct stream tokenization rather than heavy string-slicing libraries, maximizing memory efficiency.

---

## 🧠 Technical Architecture

This engine was built to demonstrate mastery over low-level system operations. Key concepts utilized include:

| Engineering Concept | Implementation in Project |
| :--- | :--- |
| **File I/O Streams** | Engineered continuous read/write pipelines using `"r"` and `"w"` modes. |
| **String Parsing** | Mastered character-array traversal and delimiter-based tokenization. |
| **Control Flow** | Designed rigid conditional ladders (`strcmp`) for accurate alphanumeric mapping. |
| **Memory Safety** | Enforced strict `EOF` (End of File) checks to prevent infinite loops and memory leaks. |

---

## 🚀 How to Run Locally

To deploy this engine on your local machine, ensure you have a standard C compiler (like `gcc`) installed.

**1. Clone the repository:**
```bash
git clone <your-github-url-here>
cd Morse-Code-Converter
