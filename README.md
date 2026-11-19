

# ⚡ ATLAS

### 🚀 High-Performance Multithreaded Web Server in C++20

> 🌐 A lightweight, event-driven HTTP/1.1 server built from scratch using Linux networking, `epoll`, and multithreading.

<p align="center">
  🚧 <b>Under Active Development</b> 🚧
</p>

---

## 📌 Overview

ATLAS is a systems programming project focused on building a concurrent HTTP server capable of handling numerous client connections efficiently.

It uses a hybrid architecture combining **non-blocking I/O**, an **`epoll`-based event loop**, and a **fixed-size worker thread pool**. The project emphasizes low-level networking, concurrency control, memory management, and performance optimization without relying on high-level networking frameworks.

## 🏗️ Architecture

```text
       🌍 Clients
          │
          ▼
    🔌 TCP Sockets
   (Non-blocking)
          │
          ▼
     ⚡ epoll Loop
          │
          ▼
    📩 HTTP Parser
          │
          ▼
   📤 Task Dispatcher
          │
          ▼
    🧵 Worker Pool
          │
          ▼
  📬 Completion Queue
      (eventfd)
          │
          ▼
 🛠️ Response Management
          │
          ▼
    🌐 HTTP Response
```

The event loop manages client connections and socket I/O, while worker threads handle request processing. Completed tasks are communicated back to the event loop for response delivery.

## 🛠️ Technology Stack

| Technology | Usage |
|---|---|
| 💻 **C++20** | Core implementation |
| 🐧 Linux POSIX APIs | System-level networking |
| 🔌 TCP Sockets & epoll | Non-blocking, event-driven I/O |
| 🧵 std::thread | Multithreading |
| 🔒 Mutex & Condition Variables | Synchronization |
| ⚙️ CMake | Build system |
| 🧪 GoogleTest | Unit testing |
| 🐳 Docker | Containerization |
| 📊 wrk / wrk2 | Benchmarking |
| 🐛 GDB / Valgrind | Debugging and memory analysis |

## ✨ Features

### 🔧 Core Implementation

- [ ] 🔌 Non-blocking TCP server
- [ ] ⚡ `epoll`-based event loop
- [ ] 🌐 HTTP/1.1 request parsing and response generation
- [ ] 🧵 Fixed-size worker thread pool
- [ ] 📬 Bounded task and completion queues
- [ ] 🔔 `eventfd` worker notifications
- [ ] 🔄 Persistent connections (Keep-Alive)
- [ ] 📂 Static file serving
- [ ] 🛑 Graceful shutdown and structured logging
- [ ] 🐳 Docker deployment

### 🚀 Planned Enhancements

- [ ] 🗄️ LRU cache with TTL
- [ ] 🛡️ Token bucket rate limiting
- [ ] 🌍 Per-IP request limiting
- [ ] 🧠 Memory pool experimentation
- [ ] 📈 Performance profiling and optimization

## 📊 Performance Targets

<text color="secondary" size="sm">🎯 Experimental engineering goals — not yet achieved or benchmark-verified.</text>

| Metric | 🎯 Target |
|---|---:|
| ⚡ Peak throughput | 100,000 requests/sec |
| 🔄 Sustained throughput | 100,000 requests/sec |
| ⏱️ 5-minute average throughput | 75,000 requests/sec |
| 🧠 Memory growth | 0% under sustained load |
| 💾 Stable memory usage | Below 1.5 MB (initial target) |

### 📈 Benchmark Metrics

- Requests per second (RPS)
- P50, P95 and P99 latency
- CPU utilization
- Resident Set Size (RSS)
- Concurrent connections
- Memory behavior under sustained load

Actual measurements will be published with their hardware, configuration, and test conditions.

## 📁 Project Structure

```text
atlas/
├── 📂 include/
│   ├── server/
│   ├── network/
│   ├── http/
│   ├── concurrency/
│   ├── handlers/
│   └── utils/
├── 📂 src/
│   ├── server/
│   ├── network/
│   ├── http/
│   ├── concurrency/
│   ├── handlers/
│   └── utils/
├── 🧪 tests/
│   ├── unit/
│   └── integration/
├── 📊 benchmarks/
├── 🌐 public/
├── 📚 docs/
├── ⚙️ CMakeLists.txt
├── 🐳 Dockerfile
├── 🐳 docker-compose.yml
├── 📄 .gitignore
└── 📖 README.md
```

## 🗺️ Development Roadmap

| Phase | Focus | Status |
|---|---|---|
| 1️⃣ | C++ Systems Foundations | 🔄 In Progress |
| 2️⃣ | TCP Socket Programming | ⏳ Planned |
| 3️⃣ | HTTP Protocol Implementation | ⏳ Planned |
| 4️⃣ | Multithreading & Thread Pool | ⏳ Planned |
| 5️⃣ | epoll Integration | ⏳ Planned |
| 6️⃣ | Testing & Performance Optimization | ⏳ Planned |
| 7️⃣ | Docker & Documentation | ⏳ Planned |
| 8️⃣ | Advanced Features | ⏳ Planned |

## 🧩 Engineering Focus

- 🧠 **Resource ownership:** RAII and predictable memory management.
- 🔒 **Concurrency safety:** Avoiding race conditions and deadlocks.
- 🏗️ **Modular design:** Separating networking, HTTP, and concurrency components.
- 📈 **Performance:** Optimizing based on reproducible benchmarks rather than assumptions.

---

<p align="center">
   <b>⚡ ATLAS —Built with C++17, curiosity and a passion for systems engineering. ⚡ </b>
  <br/>
  <sub>🚀 Learning by building. Engineering by understanding. Optimizing by measuring. 🚀 </sub>
</p>

