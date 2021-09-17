{"changed":true,"filter":false,"title":"Ufly.cpp","tooltip":"/Ufly.cpp","value":"#include \"Matrix.hpp\"\n#include <iostream>\n#include <cmath>\n#include <sstream>\n#include <fstream>\n#include <vector>\n\nusing namespace std;\n\nMatrix::Matrix(int _n)\n{\n    //not sure if this is the code we need. taken from sanfoundry.com\n    n = _n;\n    adj = new int* [n];\n    for (int i = 0; i < n; i++)\n    {\n        adj[j] = new int[n];\n        for (int j = 0; j < n; j++)\n        {\n            adj[i][j] = 0;\n        }\n    }\n}\n\n//Switching the edge from '0' to '1' between an origin and destination\nvoid Matrix::addEdge(int _origin, int _destination)\n{\n    if (_origin > n || _destination > n || _origin < 0 || _destination < 0)\n    {\n        cout << \"Incorrect Edge Input\" << endl;\n    }\n    else\n    {\n        adj[_origin-1][_destination-1] = 1;\n    }\n}\n\n\nvoid Matrix::printMatrix();\n{\n    for (int i = 0; i < n; i++)\n    {\n        for (int j = 0; j < n; j++)\n        {\n            cout << adj[i][j] << \" \" << endl;\n        }\n    }\n}\n\n//Checking if a plane can fly to a certain destination, return 'true' or 'false'\nbool Matrix::isConnected(int _origin, int _destination)\n{\n    bool available = false;\n    \n    if (adj[_origin][_destination] == 1)\n        return true;\n    return available;\n}","undoManager":{"mark":-138,"position":100,"stack":[[{"start":{"row":29,"column":8},"end":{"row":29,"column":9},"action":"insert","lines":["c"],"id":242},{"start":{"row":29,"column":9},"end":{"row":29,"column":10},"action":"insert","lines":["o"]},{"start":{"row":29,"column":10},"end":{"row":29,"column":11},"action":"insert","lines":["u"]},{"start":{"row":29,"column":11},"end":{"row":29,"column":12},"action":"insert","lines":["t"]}],[{"start":{"row":29,"column":12},"end":{"row":29,"column":13},"action":"insert","lines":[" "],"id":243},{"start":{"row":29,"column":13},"end":{"row":29,"column":14},"action":"insert","lines":["<"]},{"start":{"row":29,"column":14},"end":{"row":29,"column":15},"action":"insert","lines":["<"]}],[{"start":{"row":29,"column":15},"end":{"row":29,"column":16},"action":"insert","lines":[" "],"id":244}],[{"start":{"row":29,"column":16},"end":{"row":29,"column":18},"action":"insert","lines":["\"\""],"id":245}],[{"start":{"row":29,"column":17},"end":{"row":29,"column":18},"action":"insert","lines":["I"],"id":246},{"start":{"row":29,"column":18},"end":{"row":29,"column":19},"action":"insert","lines":["n"]},{"start":{"row":29,"column":19},"end":{"row":29,"column":20},"action":"insert","lines":["c"]},{"start":{"row":29,"column":20},"end":{"row":29,"column":21},"action":"insert","lines":["o"]},{"start":{"row":29,"column":21},"end":{"row":29,"column":22},"action":"insert","lines":["r"]},{"start":{"row":29,"column":22},"end":{"row":29,"column":23},"action":"insert","lines":["r"]},{"start":{"row":29,"column":23},"end":{"row":29,"column":24},"action":"insert","lines":["e"]},{"start":{"row":29,"column":24},"end":{"row":29,"column":25},"action":"insert","lines":["c"]},{"start":{"row":29,"column":25},"end":{"row":29,"column":26},"action":"insert","lines":["t"]}],[{"start":{"row":29,"column":26},"end":{"row":29,"column":27},"action":"insert","lines":[" "],"id":247},{"start":{"row":29,"column":27},"end":{"row":29,"column":28},"action":"insert","lines":["E"]},{"start":{"row":29,"column":28},"end":{"row":29,"column":29},"action":"insert","lines":["d"]},{"start":{"row":29,"column":29},"end":{"row":29,"column":30},"action":"insert","lines":["g"]},{"start":{"row":29,"column":30},"end":{"row":29,"column":31},"action":"insert","lines":["e"]}],[{"start":{"row":29,"column":32},"end":{"row":29,"column":33},"action":"insert","lines":[" "],"id":248},{"start":{"row":29,"column":33},"end":{"row":29,"column":34},"action":"insert","lines":["<"]},{"start":{"row":29,"column":34},"end":{"row":29,"column":35},"action":"insert","lines":["<"]}],[{"start":{"row":29,"column":35},"end":{"row":29,"column":36},"action":"insert","lines":[" "],"id":249}],[{"start":{"row":29,"column":35},"end":{"row":29,"column":36},"action":"remove","lines":[" "],"id":250},{"start":{"row":29,"column":34},"end":{"row":29,"column":35},"action":"remove","lines":["<"]},{"start":{"row":29,"column":33},"end":{"row":29,"column":34},"action":"remove","lines":["<"]},{"start":{"row":29,"column":32},"end":{"row":29,"column":33},"action":"remove","lines":[" "]},{"start":{"row":29,"column":31},"end":{"row":29,"column":32},"action":"remove","lines":["\""]}],[{"start":{"row":29,"column":31},"end":{"row":29,"column":32},"action":"insert","lines":[" "],"id":251},{"start":{"row":29,"column":32},"end":{"row":29,"column":33},"action":"insert","lines":["I"]},{"start":{"row":29,"column":33},"end":{"row":29,"column":34},"action":"insert","lines":["n"]}],[{"start":{"row":29,"column":33},"end":{"row":29,"column":34},"action":"remove","lines":["n"],"id":252}],[{"start":{"row":29,"column":33},"end":{"row":29,"column":34},"action":"insert","lines":["n"],"id":253},{"start":{"row":29,"column":34},"end":{"row":29,"column":35},"action":"insert","lines":["p"]},{"start":{"row":29,"column":35},"end":{"row":29,"column":36},"action":"insert","lines":["u"]},{"start":{"row":29,"column":36},"end":{"row":29,"column":37},"action":"insert","lines":["t"]},{"start":{"row":29,"column":37},"end":{"row":29,"column":38},"action":"insert","lines":["\""]}],[{"start":{"row":29,"column":38},"end":{"row":29,"column":39},"action":"insert","lines":[" "],"id":254},{"start":{"row":29,"column":39},"end":{"row":29,"column":40},"action":"insert","lines":["<"]},{"start":{"row":29,"column":40},"end":{"row":29,"column":41},"action":"insert","lines":["<"]}],[{"start":{"row":29,"column":41},"end":{"row":29,"column":42},"action":"insert","lines":[" "],"id":255},{"start":{"row":29,"column":42},"end":{"row":29,"column":43},"action":"insert","lines":["e"]},{"start":{"row":29,"column":43},"end":{"row":29,"column":44},"action":"insert","lines":["n"]},{"start":{"row":29,"column":44},"end":{"row":29,"column":45},"action":"insert","lines":["d"]},{"start":{"row":29,"column":45},"end":{"row":29,"column":46},"action":"insert","lines":["l"]},{"start":{"row":29,"column":46},"end":{"row":29,"column":47},"action":"insert","lines":[";"]}],[{"start":{"row":30,"column":5},"end":{"row":31,"column":0},"action":"insert","lines":["",""],"id":256},{"start":{"row":31,"column":0},"end":{"row":31,"column":4},"action":"insert","lines":["    "]},{"start":{"row":31,"column":4},"end":{"row":31,"column":5},"action":"insert","lines":["e"]},{"start":{"row":31,"column":5},"end":{"row":31,"column":6},"action":"insert","lines":["l"]},{"start":{"row":31,"column":6},"end":{"row":31,"column":7},"action":"insert","lines":["s"]},{"start":{"row":31,"column":7},"end":{"row":31,"column":8},"action":"insert","lines":["e"]}],[{"start":{"row":31,"column":8},"end":{"row":32,"column":0},"action":"insert","lines":["",""],"id":257},{"start":{"row":32,"column":0},"end":{"row":32,"column":4},"action":"insert","lines":["    "]},{"start":{"row":32,"column":4},"end":{"row":32,"column":5},"action":"insert","lines":["{"]}],[{"start":{"row":32,"column":5},"end":{"row":34,"column":5},"action":"insert","lines":["","        ","    }"],"id":258}],[{"start":{"row":33,"column":8},"end":{"row":33,"column":9},"action":"insert","lines":["a"],"id":259},{"start":{"row":33,"column":9},"end":{"row":33,"column":10},"action":"insert","lines":["d"]},{"start":{"row":33,"column":10},"end":{"row":33,"column":11},"action":"insert","lines":["j"]}],[{"start":{"row":33,"column":11},"end":{"row":33,"column":13},"action":"insert","lines":["[]"],"id":260}],[{"start":{"row":33,"column":12},"end":{"row":33,"column":13},"action":"insert","lines":["_"],"id":261},{"start":{"row":33,"column":13},"end":{"row":33,"column":14},"action":"insert","lines":["o"]},{"start":{"row":33,"column":14},"end":{"row":33,"column":15},"action":"insert","lines":["r"]},{"start":{"row":33,"column":15},"end":{"row":33,"column":16},"action":"insert","lines":["i"]},{"start":{"row":33,"column":16},"end":{"row":33,"column":17},"action":"insert","lines":["g"]},{"start":{"row":33,"column":17},"end":{"row":33,"column":18},"action":"insert","lines":["i"]},{"start":{"row":33,"column":18},"end":{"row":33,"column":19},"action":"insert","lines":["n"]}],[{"start":{"row":33,"column":19},"end":{"row":33,"column":20},"action":"insert","lines":["-"],"id":262},{"start":{"row":33,"column":20},"end":{"row":33,"column":21},"action":"insert","lines":["1"]}],[{"start":{"row":33,"column":22},"end":{"row":33,"column":24},"action":"insert","lines":["[]"],"id":263}],[{"start":{"row":33,"column":23},"end":{"row":33,"column":24},"action":"insert","lines":["_"],"id":264},{"start":{"row":33,"column":24},"end":{"row":33,"column":25},"action":"insert","lines":["d"]},{"start":{"row":33,"column":25},"end":{"row":33,"column":26},"action":"insert","lines":["e"]},{"start":{"row":33,"column":26},"end":{"row":33,"column":27},"action":"insert","lines":["s"]},{"start":{"row":33,"column":27},"end":{"row":33,"column":28},"action":"insert","lines":["t"]},{"start":{"row":33,"column":28},"end":{"row":33,"column":29},"action":"insert","lines":["i"]},{"start":{"row":33,"column":29},"end":{"row":33,"column":30},"action":"insert","lines":["n"]},{"start":{"row":33,"column":30},"end":{"row":33,"column":31},"action":"insert","lines":["a"]},{"start":{"row":33,"column":31},"end":{"row":33,"column":32},"action":"insert","lines":["t"]},{"start":{"row":33,"column":32},"end":{"row":33,"column":33},"action":"insert","lines":["i"]},{"start":{"row":33,"column":33},"end":{"row":33,"column":34},"action":"insert","lines":["o"]},{"start":{"row":33,"column":34},"end":{"row":33,"column":35},"action":"insert","lines":["n"]}],[{"start":{"row":33,"column":35},"end":{"row":33,"column":36},"action":"insert","lines":["-"],"id":265},{"start":{"row":33,"column":36},"end":{"row":33,"column":37},"action":"insert","lines":["1"]}],[{"start":{"row":33,"column":38},"end":{"row":33,"column":39},"action":"insert","lines":[" "],"id":266},{"start":{"row":33,"column":39},"end":{"row":33,"column":40},"action":"insert","lines":["="]}],[{"start":{"row":33,"column":40},"end":{"row":33,"column":41},"action":"insert","lines":[" "],"id":267},{"start":{"row":33,"column":41},"end":{"row":33,"column":42},"action":"insert","lines":["1"]},{"start":{"row":33,"column":42},"end":{"row":33,"column":43},"action":"insert","lines":[";"]}],[{"start":{"row":40,"column":4},"end":{"row":40,"column":5},"action":"insert","lines":["i"],"id":268},{"start":{"row":40,"column":5},"end":{"row":40,"column":6},"action":"insert","lines":["n"]},{"start":{"row":40,"column":6},"end":{"row":40,"column":7},"action":"insert","lines":["t"]}],[{"start":{"row":40,"column":7},"end":{"row":40,"column":8},"action":"insert","lines":[" "],"id":269},{"start":{"row":40,"column":8},"end":{"row":40,"column":9},"action":"insert","lines":["i"]}],[{"start":{"row":40,"column":9},"end":{"row":40,"column":10},"action":"insert","lines":[" "],"id":270},{"start":{"row":40,"column":10},"end":{"row":40,"column":11},"action":"insert","lines":["="]}],[{"start":{"row":40,"column":11},"end":{"row":40,"column":12},"action":"insert","lines":[" "],"id":271},{"start":{"row":40,"column":12},"end":{"row":40,"column":13},"action":"insert","lines":["0"]}],[{"start":{"row":40,"column":12},"end":{"row":40,"column":13},"action":"remove","lines":["0"],"id":272},{"start":{"row":40,"column":11},"end":{"row":40,"column":12},"action":"remove","lines":[" "]},{"start":{"row":40,"column":10},"end":{"row":40,"column":11},"action":"remove","lines":["="]},{"start":{"row":40,"column":9},"end":{"row":40,"column":10},"action":"remove","lines":[" "]},{"start":{"row":40,"column":8},"end":{"row":40,"column":9},"action":"remove","lines":["i"]},{"start":{"row":40,"column":7},"end":{"row":40,"column":8},"action":"remove","lines":[" "]}],[{"start":{"row":40,"column":6},"end":{"row":40,"column":7},"action":"remove","lines":["t"],"id":273},{"start":{"row":40,"column":5},"end":{"row":40,"column":6},"action":"remove","lines":["n"]},{"start":{"row":40,"column":4},"end":{"row":40,"column":5},"action":"remove","lines":["i"]}],[{"start":{"row":40,"column":4},"end":{"row":40,"column":5},"action":"insert","lines":["f"],"id":274},{"start":{"row":40,"column":5},"end":{"row":40,"column":6},"action":"insert","lines":["o"]},{"start":{"row":40,"column":6},"end":{"row":40,"column":7},"action":"insert","lines":["r"]}],[{"start":{"row":40,"column":7},"end":{"row":40,"column":8},"action":"insert","lines":[" "],"id":275}],[{"start":{"row":40,"column":8},"end":{"row":40,"column":10},"action":"insert","lines":["()"],"id":276}],[{"start":{"row":40,"column":9},"end":{"row":40,"column":10},"action":"insert","lines":["i"],"id":277},{"start":{"row":40,"column":10},"end":{"row":40,"column":11},"action":"insert","lines":["n"]},{"start":{"row":40,"column":11},"end":{"row":40,"column":12},"action":"insert","lines":["t"]}],[{"start":{"row":40,"column":12},"end":{"row":40,"column":13},"action":"insert","lines":[" "],"id":278},{"start":{"row":40,"column":13},"end":{"row":40,"column":14},"action":"insert","lines":["i"]}],[{"start":{"row":40,"column":14},"end":{"row":40,"column":15},"action":"insert","lines":[" "],"id":279},{"start":{"row":40,"column":15},"end":{"row":40,"column":16},"action":"insert","lines":["="]}],[{"start":{"row":40,"column":16},"end":{"row":40,"column":17},"action":"insert","lines":[" "],"id":280},{"start":{"row":40,"column":17},"end":{"row":40,"column":18},"action":"insert","lines":["0"]},{"start":{"row":40,"column":18},"end":{"row":40,"column":19},"action":"insert","lines":[";"]},{"start":{"row":40,"column":19},"end":{"row":40,"column":20},"action":"insert","lines":[" "]},{"start":{"row":40,"column":20},"end":{"row":40,"column":21},"action":"insert","lines":["i"]}],[{"start":{"row":40,"column":21},"end":{"row":40,"column":22},"action":"insert","lines":[" "],"id":281},{"start":{"row":40,"column":22},"end":{"row":40,"column":23},"action":"insert","lines":["<"]}],[{"start":{"row":40,"column":23},"end":{"row":40,"column":24},"action":"insert","lines":[" "],"id":282},{"start":{"row":40,"column":24},"end":{"row":40,"column":25},"action":"insert","lines":["n"]}],[{"start":{"row":40,"column":25},"end":{"row":40,"column":26},"action":"insert","lines":[";"],"id":283}],[{"start":{"row":40,"column":26},"end":{"row":40,"column":27},"action":"insert","lines":[" "],"id":284},{"start":{"row":40,"column":27},"end":{"row":40,"column":28},"action":"insert","lines":["i"]},{"start":{"row":40,"column":28},"end":{"row":40,"column":29},"action":"insert","lines":["+"]},{"start":{"row":40,"column":29},"end":{"row":40,"column":30},"action":"insert","lines":["+"]}],[{"start":{"row":40,"column":31},"end":{"row":41,"column":0},"action":"insert","lines":["",""],"id":285},{"start":{"row":41,"column":0},"end":{"row":41,"column":4},"action":"insert","lines":["    "]},{"start":{"row":41,"column":4},"end":{"row":41,"column":5},"action":"insert","lines":["{"]}],[{"start":{"row":41,"column":5},"end":{"row":43,"column":5},"action":"insert","lines":["","        ","    }"],"id":286}],[{"start":{"row":42,"column":8},"end":{"row":42,"column":9},"action":"insert","lines":["f"],"id":287},{"start":{"row":42,"column":9},"end":{"row":42,"column":10},"action":"insert","lines":["o"]},{"start":{"row":42,"column":10},"end":{"row":42,"column":11},"action":"insert","lines":["r"]}],[{"start":{"row":42,"column":11},"end":{"row":42,"column":12},"action":"insert","lines":[" "],"id":288}],[{"start":{"row":42,"column":12},"end":{"row":42,"column":14},"action":"insert","lines":["()"],"id":289}],[{"start":{"row":42,"column":13},"end":{"row":42,"column":14},"action":"insert","lines":["i"],"id":290},{"start":{"row":42,"column":14},"end":{"row":42,"column":15},"action":"insert","lines":["n"]},{"start":{"row":42,"column":15},"end":{"row":42,"column":16},"action":"insert","lines":["t"]}],[{"start":{"row":42,"column":16},"end":{"row":42,"column":17},"action":"insert","lines":[" "],"id":291},{"start":{"row":42,"column":17},"end":{"row":42,"column":18},"action":"insert","lines":["j"]}],[{"start":{"row":42,"column":18},"end":{"row":42,"column":19},"action":"insert","lines":[" "],"id":292},{"start":{"row":42,"column":19},"end":{"row":42,"column":20},"action":"insert","lines":["="]}],[{"start":{"row":42,"column":20},"end":{"row":42,"column":21},"action":"insert","lines":[" "],"id":293},{"start":{"row":42,"column":21},"end":{"row":42,"column":22},"action":"insert","lines":["0"]},{"start":{"row":42,"column":22},"end":{"row":42,"column":23},"action":"insert","lines":[";"]}],[{"start":{"row":42,"column":23},"end":{"row":42,"column":24},"action":"insert","lines":[" "],"id":294},{"start":{"row":42,"column":24},"end":{"row":42,"column":25},"action":"insert","lines":["j"]},{"start":{"row":42,"column":25},"end":{"row":42,"column":26},"action":"insert","lines":["<"]}],[{"start":{"row":42,"column":25},"end":{"row":42,"column":26},"action":"remove","lines":["<"],"id":295}],[{"start":{"row":42,"column":25},"end":{"row":42,"column":26},"action":"insert","lines":[" "],"id":296},{"start":{"row":42,"column":26},"end":{"row":42,"column":27},"action":"insert","lines":[" "]}],[{"start":{"row":42,"column":26},"end":{"row":42,"column":27},"action":"remove","lines":[" "],"id":297}],[{"start":{"row":42,"column":26},"end":{"row":42,"column":27},"action":"insert","lines":["<"],"id":298}],[{"start":{"row":42,"column":27},"end":{"row":42,"column":28},"action":"insert","lines":[" "],"id":299}],[{"start":{"row":42,"column":28},"end":{"row":42,"column":29},"action":"insert","lines":["n"],"id":300},{"start":{"row":42,"column":29},"end":{"row":42,"column":30},"action":"insert","lines":[";"]}],[{"start":{"row":42,"column":30},"end":{"row":42,"column":31},"action":"insert","lines":[" "],"id":301},{"start":{"row":42,"column":31},"end":{"row":42,"column":32},"action":"insert","lines":["j"]},{"start":{"row":42,"column":32},"end":{"row":42,"column":33},"action":"insert","lines":["+"]},{"start":{"row":42,"column":33},"end":{"row":42,"column":34},"action":"insert","lines":["+"]}],[{"start":{"row":42,"column":35},"end":{"row":43,"column":0},"action":"insert","lines":["",""],"id":302},{"start":{"row":43,"column":0},"end":{"row":43,"column":8},"action":"insert","lines":["        "]},{"start":{"row":43,"column":8},"end":{"row":43,"column":9},"action":"insert","lines":["{"]}],[{"start":{"row":43,"column":9},"end":{"row":45,"column":9},"action":"insert","lines":["","            ","        }"],"id":303}],[{"start":{"row":44,"column":12},"end":{"row":44,"column":13},"action":"insert","lines":["c"],"id":304},{"start":{"row":44,"column":13},"end":{"row":44,"column":14},"action":"insert","lines":["o"]},{"start":{"row":44,"column":14},"end":{"row":44,"column":15},"action":"insert","lines":["u"]},{"start":{"row":44,"column":15},"end":{"row":44,"column":16},"action":"insert","lines":["t"]}],[{"start":{"row":44,"column":16},"end":{"row":44,"column":17},"action":"insert","lines":[" "],"id":305},{"start":{"row":44,"column":17},"end":{"row":44,"column":18},"action":"insert","lines":["<"]},{"start":{"row":44,"column":18},"end":{"row":44,"column":19},"action":"insert","lines":["<"]}],[{"start":{"row":44,"column":19},"end":{"row":44,"column":20},"action":"insert","lines":[" "],"id":306}],[{"start":{"row":44,"column":20},"end":{"row":44,"column":21},"action":"insert","lines":["a"],"id":307},{"start":{"row":44,"column":21},"end":{"row":44,"column":22},"action":"insert","lines":["d"]},{"start":{"row":44,"column":22},"end":{"row":44,"column":23},"action":"insert","lines":["j"]}],[{"start":{"row":44,"column":23},"end":{"row":44,"column":25},"action":"insert","lines":["[]"],"id":308}],[{"start":{"row":44,"column":24},"end":{"row":44,"column":25},"action":"insert","lines":["i"],"id":309}],[{"start":{"row":44,"column":26},"end":{"row":44,"column":28},"action":"insert","lines":["[]"],"id":310}],[{"start":{"row":44,"column":27},"end":{"row":44,"column":28},"action":"insert","lines":["j"],"id":311}],[{"start":{"row":44,"column":29},"end":{"row":44,"column":30},"action":"insert","lines":[" "],"id":312},{"start":{"row":44,"column":30},"end":{"row":44,"column":31},"action":"insert","lines":["<"]},{"start":{"row":44,"column":31},"end":{"row":44,"column":32},"action":"insert","lines":["<"]}],[{"start":{"row":44,"column":32},"end":{"row":44,"column":33},"action":"insert","lines":[" "],"id":313},{"start":{"row":44,"column":33},"end":{"row":44,"column":34},"action":"insert","lines":["e"]},{"start":{"row":44,"column":34},"end":{"row":44,"column":35},"action":"insert","lines":["n"]},{"start":{"row":44,"column":35},"end":{"row":44,"column":36},"action":"insert","lines":["d"]},{"start":{"row":44,"column":36},"end":{"row":44,"column":37},"action":"insert","lines":["l"]},{"start":{"row":44,"column":37},"end":{"row":44,"column":38},"action":"insert","lines":[";"]}],[{"start":{"row":44,"column":32},"end":{"row":44,"column":33},"action":"insert","lines":[" "],"id":314}],[{"start":{"row":44,"column":33},"end":{"row":44,"column":35},"action":"insert","lines":["\"\""],"id":315}],[{"start":{"row":44,"column":34},"end":{"row":44,"column":35},"action":"insert","lines":[" "],"id":316}],[{"start":{"row":44,"column":36},"end":{"row":44,"column":37},"action":"insert","lines":[" "],"id":317},{"start":{"row":44,"column":37},"end":{"row":44,"column":38},"action":"insert","lines":["<"]},{"start":{"row":44,"column":38},"end":{"row":44,"column":39},"action":"insert","lines":["<"]}],[{"start":{"row":52,"column":27},"end":{"row":53,"column":0},"action":"insert","lines":["",""],"id":318},{"start":{"row":53,"column":0},"end":{"row":53,"column":4},"action":"insert","lines":["    "]},{"start":{"row":53,"column":4},"end":{"row":53,"column":5},"action":"insert","lines":["i"]},{"start":{"row":53,"column":5},"end":{"row":53,"column":6},"action":"insert","lines":["f"]}],[{"start":{"row":53,"column":6},"end":{"row":53,"column":7},"action":"insert","lines":[" "],"id":319}],[{"start":{"row":53,"column":6},"end":{"row":53,"column":7},"action":"remove","lines":[" "],"id":320},{"start":{"row":53,"column":5},"end":{"row":53,"column":6},"action":"remove","lines":["f"]},{"start":{"row":53,"column":4},"end":{"row":53,"column":5},"action":"remove","lines":["i"]}],[{"start":{"row":53,"column":4},"end":{"row":54,"column":0},"action":"insert","lines":["",""],"id":321},{"start":{"row":54,"column":0},"end":{"row":54,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":54,"column":4},"end":{"row":54,"column":5},"action":"insert","lines":["i"],"id":322},{"start":{"row":54,"column":5},"end":{"row":54,"column":6},"action":"insert","lines":["f"]}],[{"start":{"row":54,"column":6},"end":{"row":54,"column":7},"action":"insert","lines":[" "],"id":323}],[{"start":{"row":54,"column":7},"end":{"row":54,"column":9},"action":"insert","lines":["()"],"id":324}],[{"start":{"row":54,"column":8},"end":{"row":54,"column":9},"action":"insert","lines":["a"],"id":325},{"start":{"row":54,"column":9},"end":{"row":54,"column":10},"action":"insert","lines":["d"]},{"start":{"row":54,"column":10},"end":{"row":54,"column":11},"action":"insert","lines":["j"]}],[{"start":{"row":54,"column":11},"end":{"row":54,"column":13},"action":"insert","lines":["[]"],"id":326}],[{"start":{"row":54,"column":12},"end":{"row":54,"column":13},"action":"insert","lines":["_"],"id":327},{"start":{"row":54,"column":13},"end":{"row":54,"column":14},"action":"insert","lines":["o"]},{"start":{"row":54,"column":14},"end":{"row":54,"column":15},"action":"insert","lines":["r"]},{"start":{"row":54,"column":15},"end":{"row":54,"column":16},"action":"insert","lines":["i"]},{"start":{"row":54,"column":16},"end":{"row":54,"column":17},"action":"insert","lines":["g"]},{"start":{"row":54,"column":17},"end":{"row":54,"column":18},"action":"insert","lines":["i"]},{"start":{"row":54,"column":18},"end":{"row":54,"column":19},"action":"insert","lines":["n"]}],[{"start":{"row":54,"column":20},"end":{"row":54,"column":22},"action":"insert","lines":["[]"],"id":328}],[{"start":{"row":54,"column":21},"end":{"row":54,"column":22},"action":"insert","lines":["_"],"id":329},{"start":{"row":54,"column":22},"end":{"row":54,"column":23},"action":"insert","lines":["d"]},{"start":{"row":54,"column":23},"end":{"row":54,"column":24},"action":"insert","lines":["e"]},{"start":{"row":54,"column":24},"end":{"row":54,"column":25},"action":"insert","lines":["s"]},{"start":{"row":54,"column":25},"end":{"row":54,"column":26},"action":"insert","lines":["t"]},{"start":{"row":54,"column":26},"end":{"row":54,"column":27},"action":"insert","lines":["i"]},{"start":{"row":54,"column":27},"end":{"row":54,"column":28},"action":"insert","lines":["n"]},{"start":{"row":54,"column":28},"end":{"row":54,"column":29},"action":"insert","lines":["a"]},{"start":{"row":54,"column":29},"end":{"row":54,"column":30},"action":"insert","lines":["t"]},{"start":{"row":54,"column":30},"end":{"row":54,"column":31},"action":"insert","lines":["i"]},{"start":{"row":54,"column":31},"end":{"row":54,"column":32},"action":"insert","lines":["o"]},{"start":{"row":54,"column":32},"end":{"row":54,"column":33},"action":"insert","lines":["n"]}],[{"start":{"row":54,"column":34},"end":{"row":54,"column":35},"action":"insert","lines":[" "],"id":330},{"start":{"row":54,"column":35},"end":{"row":54,"column":36},"action":"insert","lines":["="]},{"start":{"row":54,"column":36},"end":{"row":54,"column":37},"action":"insert","lines":["="]}],[{"start":{"row":54,"column":37},"end":{"row":54,"column":38},"action":"insert","lines":[" "],"id":331}],[{"start":{"row":54,"column":38},"end":{"row":54,"column":39},"action":"insert","lines":["1"],"id":332}],[{"start":{"row":54,"column":40},"end":{"row":55,"column":0},"action":"insert","lines":["",""],"id":333},{"start":{"row":55,"column":0},"end":{"row":55,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":55,"column":4},"end":{"row":55,"column":8},"action":"insert","lines":["    "],"id":334}],[{"start":{"row":55,"column":8},"end":{"row":55,"column":9},"action":"insert","lines":["r"],"id":335},{"start":{"row":55,"column":9},"end":{"row":55,"column":10},"action":"insert","lines":["e"]},{"start":{"row":55,"column":10},"end":{"row":55,"column":11},"action":"insert","lines":["t"]},{"start":{"row":55,"column":11},"end":{"row":55,"column":12},"action":"insert","lines":["u"]},{"start":{"row":55,"column":12},"end":{"row":55,"column":13},"action":"insert","lines":["r"]},{"start":{"row":55,"column":13},"end":{"row":55,"column":14},"action":"insert","lines":["n"]}],[{"start":{"row":55,"column":14},"end":{"row":55,"column":15},"action":"insert","lines":[" "],"id":336},{"start":{"row":55,"column":15},"end":{"row":55,"column":16},"action":"insert","lines":["t"]},{"start":{"row":55,"column":16},"end":{"row":55,"column":17},"action":"insert","lines":["r"]},{"start":{"row":55,"column":17},"end":{"row":55,"column":18},"action":"insert","lines":["u"]},{"start":{"row":55,"column":18},"end":{"row":55,"column":19},"action":"insert","lines":["r"]},{"start":{"row":55,"column":19},"end":{"row":55,"column":20},"action":"insert","lines":["e"]}],[{"start":{"row":55,"column":19},"end":{"row":55,"column":20},"action":"remove","lines":["e"],"id":337},{"start":{"row":55,"column":18},"end":{"row":55,"column":19},"action":"remove","lines":["r"]}],[{"start":{"row":55,"column":18},"end":{"row":55,"column":19},"action":"insert","lines":["e"],"id":338},{"start":{"row":55,"column":19},"end":{"row":55,"column":20},"action":"insert","lines":[";"]}],[{"start":{"row":56,"column":4},"end":{"row":56,"column":5},"action":"insert","lines":["r"],"id":339},{"start":{"row":56,"column":5},"end":{"row":56,"column":6},"action":"insert","lines":["e"]},{"start":{"row":56,"column":6},"end":{"row":56,"column":7},"action":"insert","lines":["t"]},{"start":{"row":56,"column":7},"end":{"row":56,"column":8},"action":"insert","lines":["u"]},{"start":{"row":56,"column":8},"end":{"row":56,"column":9},"action":"insert","lines":["r"]},{"start":{"row":56,"column":9},"end":{"row":56,"column":10},"action":"insert","lines":["n"]}],[{"start":{"row":56,"column":10},"end":{"row":56,"column":11},"action":"insert","lines":[" "],"id":340},{"start":{"row":56,"column":11},"end":{"row":56,"column":12},"action":"insert","lines":["a"]},{"start":{"row":56,"column":12},"end":{"row":56,"column":13},"action":"insert","lines":["v"]},{"start":{"row":56,"column":13},"end":{"row":56,"column":14},"action":"insert","lines":["a"]},{"start":{"row":56,"column":14},"end":{"row":56,"column":15},"action":"insert","lines":["i"]},{"start":{"row":56,"column":15},"end":{"row":56,"column":16},"action":"insert","lines":["l"]},{"start":{"row":56,"column":16},"end":{"row":56,"column":17},"action":"insert","lines":["a"]},{"start":{"row":56,"column":17},"end":{"row":56,"column":18},"action":"insert","lines":["b"]},{"start":{"row":56,"column":18},"end":{"row":56,"column":19},"action":"insert","lines":["l"]},{"start":{"row":56,"column":19},"end":{"row":56,"column":20},"action":"insert","lines":["e"]},{"start":{"row":56,"column":20},"end":{"row":56,"column":21},"action":"insert","lines":[";"]}],[{"start":{"row":0,"column":10},"end":{"row":0,"column":14},"action":"remove","lines":["Ufly"],"id":341},{"start":{"row":0,"column":10},"end":{"row":0,"column":16},"action":"insert","lines":["Matrix"]}],[{"start":{"row":9,"column":0},"end":{"row":9,"column":4},"action":"remove","lines":["Ufly"],"id":342},{"start":{"row":9,"column":0},"end":{"row":9,"column":6},"action":"insert","lines":["Matrix"]},{"start":{"row":9,"column":8},"end":{"row":9,"column":12},"action":"remove","lines":["Ufly"]},{"start":{"row":9,"column":8},"end":{"row":9,"column":14},"action":"insert","lines":["Matrix"]},{"start":{"row":25,"column":5},"end":{"row":25,"column":9},"action":"remove","lines":["Ufly"]},{"start":{"row":25,"column":5},"end":{"row":25,"column":11},"action":"insert","lines":["Matrix"]},{"start":{"row":38,"column":5},"end":{"row":38,"column":9},"action":"remove","lines":["Ufly"]},{"start":{"row":38,"column":5},"end":{"row":38,"column":11},"action":"insert","lines":["Matrix"]},{"start":{"row":50,"column":5},"end":{"row":50,"column":9},"action":"remove","lines":["Ufly"]},{"start":{"row":50,"column":5},"end":{"row":50,"column":11},"action":"insert","lines":["Matrix"]}]]},"ace":{"folds":[],"scrolltop":535.5,"scrollleft":0,"selection":{"start":{"row":9,"column":6},"end":{"row":9,"column":6},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":30,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1553534439190}