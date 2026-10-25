# GD Bot AI

Repository starter for the Android64 Geometry Dash mod GD Bot AI.

## Target
- Geode SDK: `v5.11.2`
- Geometry Dash Android: `2.2081`
- Platform: `Android64`
- Language: C++
- CI: GitHub Actions

## Repository layout
```text
.
├── .github/
│   └── workflows/
│       └── main.yml
├── src/
│   └── main.cpp
├── CMakeLists.txt
├── mod.json
└── README.md
```

## Build
1. Upload the contents of this folder to the root of a new GitHub repository.
2. Open the repository's **Actions** tab.
3. Run **Build GD Bot AI**, or push a commit.
4. Download the `GD-Bot-AI-Android64` artifact from the successful workflow run.

## Current status
This is the initial build scaffold. It only confirms that the mod's hook loads and writes a log message. It does not yet contain the floating button, console, AI agent, or gameplay features. Those will be implemented and tested in subsequent steps.

Before release, replace `YourName` and the repository URL in `mod.json`.
