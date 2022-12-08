import argparse

MIN_OD = 3.9
HIGH_TOX = 12.0

MIN_ADDICT = 1.0
MAX_ADDICT = 13.0

def clamp(lower_bound, n, upper_bound):
    return max(lower_bound, min(n, upper_bound))

def od_chances(tox):
    if tox < MIN_OD:
        return 0.0

    if tox > HIGH_TOX:
        return 0.25
    else:
        return clamp(0.001, (tox / MIN_OD - 1) / 20, 0.08)

def addict_chances(addict):
    if addict < MIN_ADDICT:
        return 0.0

    return clamp(0.01, (((addict - (MIN_ADDICT / 2.0)) / MAX_ADDICT) / 3.0), 0.12)

def main(args):
    print("Toxicity: {:.4f}; Addictiveness: {:.4f}".format(args.tox, args.addict))
    print("")
    print("OD Chances: {:.4f}".format(od_chances(args.tox)))
    print("Addict Chances: {:.4f}".format(addict_chances(args.addict)))

if __name__ == "__main__":
    parser = argparse.ArgumentParser("Computes drug info.")

    parser.add_argument("tox", help="Toxicity of the drug", type=float)
    parser.add_argument("str", help="Strength of the drug", type=float)
    parser.add_argument("addict", help="Addictiveness of the drug", type=float)

    main(parser.parse_args())