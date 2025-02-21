# Progress Bar C

A single-header, simple, customizable progress bar library for C programs. Create beautiful command-line progress indicators with minimal setup.

## Features

- 🚀 Easy to use API
- 🎨 Customizable appearance
- 📊 Optional percentage display
- 🔢 Optional count display
- 🎯 Custom format strings
- ⚡ Live updates
- 🎁 Portable - just copy one header file
- 💡 No external dependencies

## Installation

Simply include the header file in your project:

```c
#include "progress-bar-c.h"
```

## Quick Start

```c
#include "progress-bar-c.h"

int main() {
    // Create a progress bar with '#' as fill symbol, 20 chars length, total of 100 steps
    ProgressBar pb = init('#', 20, 100);
    
    for(int i = 0; i <= 100; i++) {
        update(&pb, i);  // Update progress
        // or use tick() function
        // tick(&pb);
        print(pb);       // Display progress bar
        // Do some work...
    }
    return 0;
}
```

## API Documentation

### Initialization

```c
ProgressBar init(char symbol, int length, int total)
```
- `symbol`: Character used to fill the progress bar
- `length`: Width of the progress bar in characters
- `total`: Total number of steps

### Core Functions

```c
ProgressBar update(ProgressBar *pb, int progress)  // Update progress value
ProgressBar tick(ProgressBar *pb)                  // Increment progress by 1
void print(ProgressBar pb)                         // Display the progress bar
```

### Customization

```c
ProgressBar showPercent(ProgressBar *pb, bool show)                // Toggle percentage display
ProgressBar showCount(ProgressBar *pb, bool show)                  // Toggle count display
ProgressBar setStartEndSymbols(ProgressBar *pb, char start, char end)  // Set custom brackets
ProgressBar setCustomFormat(ProgressBar *pb, char* format)         // Set custom format string
ProgressBar setCompletedText(ProgressBar *pb, char* text)          // Set text showed when progress is completed
ProgressBar setSymbol(ProgressBar *pb, char symbol)                // Set symbol for filling progress bar
```

### Getters

```c
bool getShowPercent(ProgressBar *pb)   // Get percentage display
bool getShowCount(ProgressBar *pb,)    // Get count display
char getStartSymbol(ProgressBar *pb)   // Get start symbol
char getEndSymbol(ProgressBar *pb)     // Get end symbol
char* setCustomFormat(ProgressBar *pb) // Get custom format string
char* setCompletedText(ProgressBar *pb)// Get text showed when progress is completed
char getSymbol(ProgressBar *pb)        // Get symbol for filling progress bar
```


### Format String Options

The format string can include:
- `{bar}` - The progress bar itself
- `{percent}` - Percentage complete (if enabled)
- `{count}` - Progress count (if enabled)

Example format: `"Progress: {bar} | {percent} Complete ({count})"`

## Examples

### Basic Progress Bar

```c
ProgressBar pb = init('#', 20, 100);
update(&pb, 50);
print(pb);
// Output: [##########          ] 
```

### With Percentage and Count

```c
ProgressBar pb = init('=', 25, 75);
showPercent(&pb, true);
showCount(&pb, true);
update(&pb, 30);
print(pb);
// Output: [=========                ] 40% (30/75)
```

### Custom Format

```c
ProgressBar pb = init('>', 30, 50);
setCustomFormat(&pb, "Loading... {bar} {percent}");
showPercent(&pb, true);
update(&pb, 25);
print(pb);
// Output: Loading... [>>>>>>>                   ] 50%
```

### Custom Symbols

```c
ProgressBar pb = init('=', 20, 100);
setStartEndSymbols(&pb, '<', '>');
update(&pb, 75);
print(pb);
// Output: <===============     >
```

## Contributing

Contributions are welcome! Here's how you can help:

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

### Development Guidelines

- Follow C89/C90 standard for maximum compatibility
- Maintain consistent code style
- Add tests for new features
- Update documentation for API changes
- Keep the library dependency-free

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Author

ANKDDEV - [GitHub Profile](https://github.com/ANKDDEV)
