# Repository Guidelines

## Project Structure & Module Organization

WUTA is a ROS 2 Humble workspace composed from Git submodules. `WUTA-FSD/ros2_ws/` contains the C++ FSD stack, custom messages, KISS-ICP, EKF, perception, planning, and control packages. `WUTA-SIM/` contains Python simulators, track assets, RViz configuration, and `simulator_bringup`. Track definitions live in `WUTA-SIM/perception_simulation/tracks/`; shared technical documentation is under `docs/`. Initialize all dependencies before building:

```bash
git submodule update --init --recursive
```

Make changes inside the owning submodule. The top-level repository records submodule commit pointers, not the submodule's files.

## Build, Test, and Development Commands

Build FSD first, then the simulator overlay:

```bash
cd WUTA-FSD/ros2_ws && ./build_ws.sh
source install/setup.bash
cd ../../WUTA-SIM
colcon build --base-paths . --symlink-install --packages-up-to simulator_bringup
```

From the repository root, `./start_simulator.sh --rviz` builds and starts the default system. Use `--skip-build` only after a successful build. For focused LiDAR tests, run `python3 -m pytest tests/test_lidar_core.py -q` from `WUTA-SIM/perception_simulation`. Inspect runtime wiring with `ros2 node list`, `ros2 topic list -t`, and `ros2 run tf2_tools view_frames`.

## Coding Style & Naming Conventions

Use existing ROS 2 conventions: C++17 with `rclcpp`, four-space Python indentation with `rclpy`, and package-local launch/config files. Use `snake_case` for Python files, ROS parameters, topics, and frame names; use `PascalCase` for C++ classes. Keep global topics absolute (for example, `/localization/pose`) and document every new topic, service, action, or frame in `docs/ROS_INTERFACE.md`.

## Testing Guidelines

Build the smallest affected package set before broad builds. Test new behavior through its actual ROS interface, including message type, frame, timestamp, and QoS where relevant. Do not commit generated `build/`, `install/`, `log/`, `__pycache__/`, temporary maps, or RViz user state.

## Commit & Pull Request Guidelines

History contains mixed messages; use clear imperative Conventional Commit-style subjects for new work, such as `fix(localization): publish a single EKF TF`. Commit submodule changes inside their own repository first, then commit the updated top-level pointer. PRs should state scope, test commands/results, configuration changes, and include RViz screenshots when visual output changes. Link related issues and call out interface or TF changes explicitly.
