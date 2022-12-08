import argparse

CLIENT_SALE_SATISFACTION_RANGE = 0.3

def mid(lower_bound, n, upper_bound):
    return max(lower_bound, min(n, upper_bound))

def clientSatisfactionGain(strength, expectedDrugProportion, expectedDrugStrength, clientExpectedQuality):
    productStrengthRatio = strength / expectedDrugStrength

    temp = expectedDrugProportion * 0.2
    temp2 = mid(0, productStrengthRatio, 1.5)

    productQualityRatio = temp * temp2 + expectedDrugProportion

    clientExpectedQuality += 0.2
    clientExpectedQuality = mid(0.4, clientExpectedQuality, 0.9)

    clientSatisfaction = (productQualityRatio / clientExpectedQuality) - 0.95
    clientSatisfaction *= CLIENT_SALE_SATISFACTION_RANGE
    return mid(-0.5, clientSatisfaction, 0.25)

def main(args):
    print("Strength: {:.4f}; Purity: {:.4f}".format(args.strength, args.purity))
    print("Expected Strength: {:.4f}; Expected Quality: {:.4f}".format(args.exp_strength, args.exp_quality))
    print()
    print("Client Satisfaction Gain: {:.4f}".format(clientSatisfactionGain(args.strength, args.purity, args.exp_strength, args.exp_quality)))

if __name__ == "__main__":
    parser = argparse.ArgumentParser("Computes rep gain for a client")

    parser.add_argument("strength", help="Strength of the given drug", type=float)
    parser.add_argument("purity", help="Purity of a given drug (e.g. 0.7 amp, 0.3 filler)", type=float)
    parser.add_argument("exp_strength", help="Strengh of the pure drug (e.g. 2.5 for amp)", type=float)
    parser.add_argument("exp_quality", help="Expected quality of a given drug", type=float)

    main(parser.parse_args())